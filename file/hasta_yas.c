/* hasta dosyasında kullanıcının girdigi yastan buyuk hastaları yazdıran program */
#include <stdio.h>
int main()
{
    int age;
    struct patient
    {
        char name[20], semptom[50];
        int age;
    };
    typedef struct patient pat;
    pat patient;
    FILE *p;
    p=fopen("hasta","r");
    printf("\nkac yasından buyuk hastaları yazdırmak istersiniz  ");
    scanf("%d",&age);
    while(1)
    {
        fread(&patient,sizeof(pat),1,p);
        if(feof(p)) break;
        if(patient.age>age) 
            printf("\n%s %s %d",patient.name, patient.semptom, patient.age);
    }
    fclose(p);
    return 0;
}