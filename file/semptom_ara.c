/* var olan hasta kayıtları dosyasından belirli bir semptomu arayıp bulunan hastaları ekrana yazdıran program */

//sementation fault!!!

#include <stdio.h>
#include <string.h>
int search_string(char hikaye[], char semptom[]);
int main()
{
    int ctrl; 
    char semptom[20];
    struct patient
    {
        char name[20], semptom[50];
        int age;
    };
    typedef struct patient pat;
    pat patient;
    FILE *p;
    p=fopen("hasta","r");
    printf("\naramak istediginiz semptomu giriniz  ");
    scanf("%s",semptom);
    while(!feof(p))
    {
        fread(&patient,sizeof(pat),1,p);
        ctrl=search_string(patient.semptom,semptom);
        if(ctrl==1)
            printf("\n%s %d",patient.name,patient.age);
    }
    fclose(p);
    return 0;
}
int search_string(char hikaye[], char semptom[])
{
    int x, i=0,j;
    char kelime[20];
    x=strlen(semptom);
    while(hikaye[i]!='\0')//kısa hali nasıldı bir de onu deneyelim
    {
        for(j=0;j<x;j++)
            strcpy(&kelime[i],&hikaye[i+j]);
        if(strcmp(kelime,semptom)==0)
            return 1;
    }
    return 0;
}
