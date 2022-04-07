/* bir dizini elemanlarının frekansını bulmak için şimdiye kadar çeşitli yontemler denedik simdi yeni birtane */
#include <stdio.h>
void f(int*, int*, int);
int main()
{
    int a[28]={2,2,3,3,3,4,4,4,4,5,5,5,5,5,6,6,6,6,6,6,7,7,7,7,7,7,7,0},i,j,b[28]={0},size=28;
    for(i=0;a[i]!=0;i++)
        for(j=i+1;j<size;j++)
            if(a[i]==a[j])
            {
                b[i]++;
                f(a,&size,j);
                j--;
            }    
    for(i=0;i<size;i++)
        printf("\n%d adet %d bulunmaktadır",b[i]+1,a[i]);
    return 0;
}
void f(int *a, int *size, int j)//eleman kaydırma 
{
    int k;
    for(k=j;k<*size;k++)
        a[k]=a[k+1]; 
    *size-=1;
}