/* rekursif fonksiyon ile bir sayının faktoriyelini bulma */
#include <stdio.h>

int faktoriyel (int );
int main()
{
    int n;
    printf("\nfaktoriyelini ogrenmek istediginiz sayıyı giriniz lutfen ");
    scanf("%d",&n);
    printf("%d",faktoriyel(n));
    return 0;
}
int faktoriyel (int x)
{
    if (x!=0)
        return (x*faktoriyel(x-1));

    else
        return 1;
}