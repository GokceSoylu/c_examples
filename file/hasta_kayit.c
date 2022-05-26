/* hasta bilgilerini kaydeden kod */
#include <stdio.h>//nacizane tavsiyenm random file'da kayıt sırasında feof() kulanma :))
struct patient
{
    char name[20], semptom[50];
    int age;
};
typedef struct patient pat;
FILE *p;
void fscanf_pat(pat*);
int main()
{
    pat patient;
    int x=1;
    p=fopen("hatsa","w");
    while(x==1)
    {
        fscanf_pat(&patient);
        fwrite(&patient,sizeof(pat),1,p);
        printf("\ndevam etmek iicn 1  giriniz ");
        scanf("%d",&x);
    }
    fclose(p);
    return 0;
}
void fscanf_pat(pat *patient)
{
    printf("\nname  "); scanf("%s",patient->name);
    printf("\nhikaye  "); scanf("%s",patient->semptom);
    printf("\nhastanin yasi  "); scanf("%d",&patient->age);
}