/* sıralayacağımız elemanlarını dosyayı oluşturuyoruz */
#include <stdio.h>
int main()
{
    int number;
    FILE *p;
    p=fopen("sort_file","w");
    printf("dosya elemanlarını giriniz\ndurdurmak icin -1 giriniz ");
    scanf("%d",&number);
    while(number!=-1)
    {
        fwrite(&number,sizeof(int),1,p);
        scanf("%d",&number);
    }
    fclose(p);
    return 0;
}