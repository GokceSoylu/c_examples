/* carpım tablosunu yazdıran rekursif fonksiyonu yazınız*/
#include <stdio.h>
void tablo(int);
int main()
{
    tablo(10);
    return 0;
}
void tablo(int a)
{
    int i;
    if(a==0)
        return;
    else
        tablo(a-1);
    for(i=1;i<=10;i++)
        printf("%d ",i*a);
    printf("\n");
}
