/* ogrenci_numrasi.txt rastgele erişmli dosyasındaki ogrenci numaralarinin icerisine "@ogrenci.karabuk.edu.tr" ifadesi ekleyerek 
ogrenci numarasi haline getiriniz string,h kütüphanesini kullanmayınız */
#include <stdio.h>
#include <stdlib.h>
void strcat_my(char*, char*);
void print_file();
int main()
{
    char number[40],add[]="@ogrenci.karabu.edu.tr";
    FILE *p;
    print_file();
    p=fopen("ogrenci_numarasi.txt","r+");
    fread(&number,40*sizeof(char),1,p);
    while(!feof(p))
    {
        strcat_my(number,add);
        fseek(p,-40*sizeof(char),SEEK_CUR);
        fwrite(&number,40*sizeof(char),1,p);
        fread(&number,40*sizeof(char),1,p);
    }
    fclose(p);
    print_file();
    return 0;
}
void strcat_my(char *x, char *y)
{
    while(*x)
        x++;
    while(*y)
    {
        *x=*y;
        x++;
        y++;
    }
    *x='\0';
}
void print_file(void)
{
    FILE *p;
    p=fopen("ogrenci_numarasi.txt","r");
    char number[40];
    fread(&number,40*sizeof(char),1,p);
    while(!feof(p))
    {
        printf("\n%s",number);
        fread(&number,40*sizeof(char),1,p);
    }
    fclose(p);
}