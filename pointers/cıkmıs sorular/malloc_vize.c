/* once isminizi kaydetmek için bellekten gerekli alanı dinamik bellek ile ayırınız ismi pointera input olmadan atayınız daha sonra ogrenci
numaranızın rakamları toplamını bulup bellek alanını toplam kadar bellek alanını genisletiniz. genisletilen bu alana ismini tekrarlı sekilde atayınız */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int i,j,L,n,sum=0;
    char *p,m[8]="necmiye";
    p=(char*)malloc(8*sizeof(char));
    strcpy(p,m);
    n=2010213001;//my student number
    while(n>0)
    {
        i=n%10;
        sum+=i;
        n=n/10;
    }
    p=realloc(p,sum*sizeof(char));
    sum-=7;//halihazirda p nimn içerisinde 7 charlık alan zaten dolu
    i=7;
    for(L=0;m[L]!=!'\0';L++);
    while(sum>7)
    {
        for(j=0;j<L;j++)
            *(p+i+j)=*(m+j);
        i+=7;
        sum-=7;    
    }
    printf("%s",p);
    return 0;
}