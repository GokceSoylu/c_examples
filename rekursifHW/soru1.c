/* 1 den n kadar olan sayıların toplamı */
#include <stdio.h>
int f(int);
int main()
{
    int n;
    printf("n sayısını girniz lutfen");
    scanf("%d",&n);
    printf("%d",f(n));
    return 0;
}
int f(int x)
{
    if(x==0)
        return 0;
    else    
        return f(x-1)+x;
}