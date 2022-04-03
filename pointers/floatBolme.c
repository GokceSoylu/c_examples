/* --Sınav sorusu-- harmonik sayı dizisinin elemanlarını yazdıran ve toplamının bulan fonksiyonu yazınız*/
#include <stdio.h>
#include <stdlib.h>
float f(int);
int main()
{
    float sum;
    int n;
    printf("\nn sayısnı giriniz lutfen ");
    scanf("%d",&n);
    sum=f(n);
    printf("\n%f",sum);
    return 0;
}
float f(int x)
{
    int a=1,d=1;
    float m;
    if(x==0)
        return 0;
    else
        m=(float)1/(a+(x-1)*d);
        printf("\n%f ",m);
        return (m+f(x-1));
}