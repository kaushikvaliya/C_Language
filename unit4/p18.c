//struct with function.
#include <stdio.h>
#include <string.h>
struct student 
{
    int id;
    char name[20];
    float percentage;
};
void func(struct student record);
int main() 
{
    struct student record;
 
    printf("Enter id :");
    scanf("%d",&record.id);
    printf("Enter name :");
    scanf("%s",&record.name);
    printf("Enter percentage :");
    scanf("%f",&record.percentage);
    func(record);
    return 0;
}
void func(struct student record)
{
    printf("Id is: %d \n", record.id);
    printf("Name is: %s \n", record.name);
    printf("Percentage is: %.2f \n", record.percentage);
}