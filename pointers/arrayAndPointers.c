/* dizler ve pointers denemsi --> her dizi pointer her pointer dizidir diyerek başlayalım. bir pointerı direkt bir dizinin göstericisi olarak 
atayabiliriz bu durumda pointer dizini ilk elmanını gösterir. eger dizinin baska belli bir elamını cagirmak istersekte pointersi diznin birinci elemnaı kabul edip 
gerkli eklemeyi yaparız. hmm istersek tek bir dizi degerinide bir pointersa atayabiliriz hadi görelim*/
#include <stdio.h>
int main()
{
    int array[10]={1,2,3,4,5,6,7,8,9,10},i;
    int *p,*o;
    p=array;
    o=&array[4];
    printf("\n*o= %d\n\n",*o);
    printf("\n*(p+4)= %d\n\n",*(p+4));
    for(i=0;i<10;i++)
        printf("\n*(p+%d)= %d\n",i,*(p+i));
    return 0;

}