/* extern bellek sınıfnda bir degisken tanımlamak için tum fonksiyonların dışına yazmalıyız. extern tipii bir degisken tanımlandıktan sonra gelen tum fonksiyonlar 
tarafından tanınır, öncekiler tanımaz. extern sınıfı degisken için programın çalışma suresi boyuca bellekte yer ayırılır. fonksiyonların dısına yazılan
degiskenler için default bellek sınıfı extern dir ooo o zmn global? evet evet extern dir:). extern bellek sınıfında ilk deger ataması yapılmassa=0 kabul edilir.*/
#include <stdio.h>
int a,b;
int toplama (int, int);
int carpma(int, int);
int main()
{
    auto int sum,multi;
    printf("\nilk sayı a = ");
    scanf("%d",&a);
    printf("\nikinci sayı b = ");
    scanf("%d",&b);
    sum=toplama(a,b);
    multi=carpma(a,b);
    printf("\n\ntoplamları = %d\n\ncarpımları = %d",sum,multi);
    return 0;
}
int c=10, d=20;
int toplama(int x, int y)
{
    printf("\nc = %d\nd = %d",c,d);
    return x+y;
}
int e,f;
extern int a,b;
int carpma(int x, int y)
{
    printf("\ne = %d\nf = %d\nint the last func. a = %d     b = %d",e,f,a,b);
    return x*y;
}