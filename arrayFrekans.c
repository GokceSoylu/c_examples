/* bir dizini elemanlarının frekansını bulmak için şimdiye kadra çeşitli yontemler denedik simdi yeni birtane */
#include <stdio.h>
int f(int*);
int main()
{
    int a[28]={1,2,2,3,3,3,4,4,4,4,5,5,5,5,5,6,6,6,6,6,6,7,7,7,7,7,7,7},i,j,b[28]={0},size=28;
    for(i=0;i<28;i++)
        for(j=i;j<28;j++)
            if(a[i]==a[j])
            {
                b[i]++;
                size=f(a,size,i);
            }    
    for(i=0;i<28;i++)
        printf("\n%d adet %d bulunmaktadır",b[i],i);
    return 0;
}
int f(int *a, int size, int i)
{
    for(k=i;k<size;k++)
    {
        a[k]=a[k+1];
    }    
    return size-1;
}