/* ogrenci_numarasi.txt isimli rastgele erişimli dosyadaki ogrenci numaralarına "@ogrenci.karabuk.edu.tr" ifadesini ekleyerek e mail haline getiriniz */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void print_file(void);
int main()
{
    char number[40], add[]="@ogrenci.karabuk.edu.tr";
    print_file();
    FILE *p;
    p=fopen("ogrenci_numarasi.txt","r+");
    fread(&number,40*sizeof(char),1,p);
    while(!feof(p))
    {
        strcat(number,add);
        fseek(p,-40*sizeof(char),SEEK_CUR);
        fwrite(&number,40*sizeof(char),1,p);
        fread(&number,40*sizeof(char),1,p);
    }
    fclose(p);
    print_file();
    return 0;
}
void print_file(void)
{
    FILE *p;
    char number[40];
    p=fopen("ogrenci_numarasi.txt","r");
    fread(&number,40*sizeof(char),1,p);
    while(!feof(p))
    {
        printf("\n%s",number);
        fread(&number,40*sizeof(char),1,p);
    }
    fclose(p);
}