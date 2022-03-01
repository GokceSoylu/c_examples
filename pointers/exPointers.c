/*a basic pointer example*/
#include <stdio.h>
int main()
{
    int a=70;
    int *p;
    p=&a;
    printf("a = *p = %d = %d",a,*p);
    printf("\n&a = p = %d = %d",&a,p);
    return 0;
}