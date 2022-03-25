/* ogrenci numaranızın binary degerini hesaplayan c kodunu yazınız dinamik bellek kullanınız */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n=2010213001,*p;
    p=(int*)malloc(sizeof(int));
    i=0;
    while(n>0)
    {
        *(p+i)=n%2;
        n=n/2;
        i++;
        p=realloc(p,(i+1)*sizeof(int));
    }
    for(n=i;n>-1;n--)
        printf(" %d",p[n]);
    return 0;
}