/*mainden alınan iki pozitif tam sayının ebobunu bulan rekürsif fonksiyon */
#include <stdio.h>
int f(int, int);
int main()
{
    int n,m;
    printf("EBOB larını hesaplamak istediginiz sayıları giriniz lutfen\nilk sayı = ");
    scanf("%d",&n);
    printf("\nikinci sayı = ");
    scanf("%d",&m);
    printf("EBOB(%d,%d) = %d",n,m,f(n,m));
    return 0;
}
int f(int x, int y)
{
    if(y==0)
        return x;
    else
        return f(y,x%y);
}