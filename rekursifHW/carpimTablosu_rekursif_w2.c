/* carpım tablosunu yazdıran rekürsif fonksiyon */
#include <stdio.h>

void carpım_tablo (int);
int main()
{
    carpım_tablo(10);
    return 0;
}
void carpım_tablo(int n)
{
    int i;
    if(n>0)
    {
        carpım_tablo(n-1);
        for(i=1;i<11;i++)
        {
            printf("%d",i*n);
            printf("\n");
        }
        printf("\v");
    }
}