/* pointer dizi adresi atama denemeleri */
#include <stdio.h>
int main()
{
    int a[5]={1,2,3,4,5},*p;
    p=a;
    printf("\n*p = %d",*p);//1
    p=a+2;
    printf("\n*p = %d",*p);//3
    p=&a[4];
    printf("\n*p = %d",*p);//5
    return 0;
}//dikkat edelim array+3 seklinde bier atama dogrudur ancak array[3] dersek adres atamak icin basına & koymalıyız. 