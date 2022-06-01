/* ogrenci.txt dosyasındaki en uzun ismi  yazdıran prıgramı yazınız */
#include <stdio.h>
int strlen_my(char*);
void strcpy_my(char*, char*);
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
        
        if(strlen_my(student.name)>strlen_my(max))
            strcpy_my(max,student.name);
    }
    fclose(p);
    printf("\nen uzun isim = %s",max);
    return 0;
}
int strlen_my(char *x)
{
    int size=0;
    while(*x++) size++; 
    return size;
}
void strcpy_my(char*x, char*y)
{
    while(*y)
    {
        *x=*y;
        x++;
        y++;
    }
    *x='\0';
}