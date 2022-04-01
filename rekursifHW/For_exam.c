/* f(x)=0       if x<=0
   f(x-1)+2     otherwise */
#include <stdio.h>
int f(int);
int main()
{
    int n;
    printf("please enter the n number ");
    scanf("%d",&n);
    printf("\n%d",f(n));
    return 0;
}
int f(int x)
{
    if(x<=0)
        return 0;
    else
        return (f(x-1)+2);
}