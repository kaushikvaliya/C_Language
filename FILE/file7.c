#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;
    int vowel=0,cons=0;
    fp=fopen("k7.txt","w+");
    {
        ch=fgetc(fp);
        for (ch = 'a'; ch <= 'z'; ch++)
        {
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            {
                vowel++;
            }
            else
            {
                cons++;
            }
        }
    }
    printf("total vowel = %d\n",vowel);
    printf("tote cons = %d\n",cons);
    fprintf(fp,"vowel = %d\n",vowel);
    fprintf(fp,"cons = %d\n",cons);

    fclose(fp);
    return 0;
}
