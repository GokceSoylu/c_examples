/* hasta dosyasında icinde kullanıcıdan alınan harf bulunan isimleri yazdıran fonksiyon :) */
#include <stdio.h>
#include <string.h>
struct patient//  NOT!!! buradaki struct'da herhengi bir yanlışlık yaparsan kod patlar. Unutmayınız rastgele erişimli dosyada byte'a göre 
{//okuyor eğer byte'a değişiklik olursa anlamsız bir hale gelir. 
    char name[20], semptom[50];
    int age;
};
typedef struct patient pat;
int search_latter(char[],char);
int main()
{
    pat patient;
    char latter;
    int ctrl=0;
    FILE *p;
    p=fopen("hasta","r");
    printf("\naramak istediginiz harfi girniz lutfen  ");
    scanf("%c",&latter);
    while(1)
    {
        fread(&patient,sizeof(pat),1,p);
        if(feof(p)) break;
        ctrl=search_latter(patient.name,latter);
        if(ctrl==1)
            printf("\n%s %d",patient.name, patient.age);
    }
    fclose(p);
    return 0;
}
int search_latter(char name[], char l)
{
    int i;
    for(i=0;name[i];i++)
        if(name[i]==l) return 1;
    return 0;
}