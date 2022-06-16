#include <stdio.h>
void function(int , int, int);
int main()
{
    function(7,12,8);
    return 0;
}
void function(int n, int a, int b)
{
    static int i=1;
    if(n<=0) return;
    function(n-3,a-2,b+n);
    printf("\nOutput %d: %d %d %d",i++,n,a,b);
    function(n-3,a-2,b+n);
}//was diffucult😪