/* dizinin elemanlarını toplayan rekursif fonksiyon. Bu kolay */
#include <stdio.h>
int sum(int[],int);
int main()
{
    int dizi[10]={1,2,3,4,5,6,7,8,9,10};
    printf("dizinin elemanları toplamı= %d",sum(dizi,9));//buraya 10 yazinca olmuyo--> neden? a[10] kaç :)) evet oyle bir deger yok ;)
    return 0;
}
int sum(int a[],int n)
{
    if(n==0)
        return a[n];
    else    
        return a[n]+sum(a,n-1);
}