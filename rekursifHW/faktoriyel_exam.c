/* 0 dan 10 a kadar olan sayıların fakotiyelini hsaplıyan ve yazdıran rekursif fonksiyonu yaziniz */
#include <stdio.h>
void f(int);
int main()
{
    f(10);
    return 0;
}
void f(int x)
{
    int i,result;
    if(x==-1)
        return;
    else
        f(x-1);
    result=1;
    for(i=x;i>0;i--)
        result*=i;
    printf("%d! = %d\n",x,result);
}