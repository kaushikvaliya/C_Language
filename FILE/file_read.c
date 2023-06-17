#include <stdio.h>
#include <inttypes.h>
#include <string.h>
#include <stdlib.h>

struct _record {
    uint32_t id;
    char name[64];
    char address[128];
    char data[128];
};

#define MAX 1024
static struct _record record[MAX];
static uint32_t index = 0;

static int
insert(struct _record *r)
{
    if (index >= MAX) {
        printf("record array is full\n");
        return -1;
    }

    memcpy(&record[index], r, sizeof(*r));
    index++;

    return 0;
}

static void
print_record_array(void)
{
    struct _record *r;
    uint32_t i;

    for (i=0 ; i<index ; i++) {
        r = &record[i];
        printf("Index: %u\n", i);
        printf("\tID: %u\n", r->id);
        printf("\tName: %s\n", r->name);
        printf("\tAddress: %s\n", r->address);
        printf("\tData: %s\n", r->data);
    }
}

static int
search_record(const char *name)
{
    struct _record *r;
    uint32_t i;

    printf("input name to be searched: '%s'\n", name);

    for (i=0 ; i<index ; i++) {
        r = &record[i];

        if (strcmp(r->name, name) == 0) {
            printf("Record found as below:\n");
            printf("Index: %u\n", i+1);                    
            printf("\tID: %u\n", r->id);
            printf("\tName: %s\n", r->name);
            printf("\tAddress: %s\n", r->address);
            printf("\tData: %s\n", r->data);
            return 0;
        }
    }

    printf("Record not found!\n");
    return -1;
}

static int
read_file()
{
    struct _record r;
    uint32_t count = 0;
        FILE *fp1;
        char buf[1024];
        fp1 = fopen("record.txt", "r");
        if (!fp1) {
                printf("failed to open file\n");
                return -1;
        }
        while (fgets(buf, sizeof(buf), fp1)) {
            // printf("buf: %s\n", buf);
            memset(&r, 0, sizeof(r));

            //sscanf(buf, "%u,%s,%s,%s\n", r.id, &r.name, &r.address, &r.data);

            // parse ID:
            char *p, *p2;
            p = strchr(buf, ',');
            if (!p) {
                printf("failed to parse ID\n");
                return -1;
            }
            *p = '\0';
            p++;
            r.id = atoi(buf);

            // parse name;
            p2 = strchr(p, ',');
            if (!p2) {
                printf("failed to parse name\n");
                return -1;
            }
            *p2 = '\0';
            p2++;
            strncpy(r.name, p, sizeof(r.name));
            p = p2;

            // parse address;
            p2 = strchr(p, ',');
            if (!p2) {
                printf("failed to parse address\n");
                return -1;
            }
            *p2 = '\0';
            p2++;
            strncpy(r.address, p, sizeof(r.address));
            p = p2;

            // parse data
            p2 = strchr(p, '\n');
            if (!p2) {
                printf("failed to parse data\n");
                return -1;
            }
            *p2 = '\0';
            p2++;
            strncpy(r.data, p, sizeof(r.data));

            // printf("ID: %u\n", r.id);
            // printf("Name: %s\n", r.name);
            // printf("Address: %s\n", r.address);
            // printf("Data: %s\n", r.data);
            // break;
            if (insert(&r) == 0) {
                count++;
            }
        }

        if (fp1) {
            fclose(fp1);
        }

        return count;
 }
 int
 main()
 {
    int n = read_file();
    if (n < 0) {
        printf("faield to parse file, please fix the record.txt\n");
        return -1;
    }
    printf("parsing done, parse count: %d\n", n);

    // print_record_array();

    while (1) {
        char input[64];
        input[0] = '\0';

        printf("Enter name to search (or press enter to exit): ");
        fgets(input, sizeof(input), stdin);
        
        if (input[0] == '\n') {
            break; // exit
        }
        input[strlen(input)-1] = '\0'; // replacing last char '\n' with '\0'
        
        search_record(input);
    }
     return 0;
 }