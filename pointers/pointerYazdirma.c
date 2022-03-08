/* %x %p %d deneme */
#include <stdio.h>
int main()
{
    char m='a',*p=&m;
    int a=10,*i=&a;
    printf("\ni = %d",i);
    printf("\ni = %x",i);
    printf("\ni = %p",i);
    printf("\np = %p",p);
    printf("\np = %x",p);
    return 0;
}