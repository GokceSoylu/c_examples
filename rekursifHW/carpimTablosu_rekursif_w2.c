/* carpım tablosunu yazdıran rekürsif fonksiyon */
#include <stdio.h>

int carpım_tablo (int);
int main()
{
    carpım_tablo(10);
    return 0;
}
int carpım_tablo(int n)
{
    int i;
    if(n>0)
    {
        for(i=1;i<11;i++)
        {
            printf("%d",i*n);
            printf("\n");
        }
        printf("\v");
        return carpım_tablo(n-1);
    }
    else
        return 0;
}