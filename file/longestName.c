/* ogrenci.txt dosyasındaki en uzun ismi yazdıran programı yazınız */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    struct student
    {
        int number;
        char name[20];
    };
    typedef struct student std;
    std student;
    char max[20];
    FILE *p;
    p=fopen("ogrenci.txt","r");
    while(!feof(p))
    {
        fread(&student,sizeof(std),1,p);
        if(strlen(student.name)>strlen(max))
            strcpy(max,student.name);
    }
    fclose(p);
    printf("\ndosyadaki en uzun isim = %s",max);
    return 0;
}