/* n sayısının basmakları toplamını bulan rekürsif fonksiyon */
#include <stdio.h>
int f(int);
int main()
{
    int n;
    printf("sayıyı giriniz lutfen");
    scanf("%d",&n);
    printf("%d",f(n));
    return 0;
}
int f(int x)
{
    int integer;
    if(x<=0)
        return 0;
    else
    {
        integer=x%10;
        x=x/10;
        return integer+f(x);
    }
}