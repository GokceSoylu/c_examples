#include <stdio.h>
int main()
{
    struct patient
    {
        char name[20], semptom[50];
        int age;
    };
    struct patient pat;
    FILE *p;
    p=fopen("hasta","r");
    while(!feof(p))
    {
        fread(&pat,sizeof(struct patient),1,p);
        printf("\n%s %s %d",pat.name, pat.semptom, pat.age);
    }
    fclose(p);
    return 0;
}