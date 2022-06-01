/* diger programlarda kullanacağımız ögrenci_numarasi.txt dosyasını oluşturan program */
#include <stdio.h>
int main()
{
    char number[40];
    FILE *p;
    p=fopen("ogrenci_numarasi.txt","w");
    printf("\nnumara ");
    scanf("%s",number);
    while(!feof(stdin))
    {
        fwrite(&number,40*sizeof(char),1,p);
        printf("\nnumara ");
        scanf("%s",number);
    }
    fclose(p);
    
    return 0;
}