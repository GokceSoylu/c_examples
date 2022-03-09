/* 10 elemanlı bir diznin en buyuk elemanını bulan rekursif fonksiyon */
#include <stdio.h>
int f(int[],int);
int main()
{
    int array[10]={12,13,114,15,1114,14,12,232,34,12};
    printf("dizinin en buyuk elemanı = %d",f(array,9));
    return 0;
}
int f(int dizi[],int x)
{
    static int max=0;
    if(x<0)
        return max;
    else
    {
        
        if(max<dizi[x])
            max=dizi[x];
        return f(dizi,x-1);
    }
}