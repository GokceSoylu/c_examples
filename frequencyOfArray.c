/* elemnaları 0-9 aralıgında olan bir dizinin her bir elemanının frekansını bulan c programı */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int a[100],b[10]={0},i;
    for(i=0;i<100;i++)
        a[i]=rand()%10;
    for(i=0;i<100;i++)
        b[a[i]]++;//aman Allah'ım müthiş degil mi 
    for(i=0;i<10;i++)
        printf("\n%d adet %d vardır",b[i],i);
    return 0;
}