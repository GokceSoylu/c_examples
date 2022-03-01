/* pointers öğrenmek adına denemeler */
#include <stdio.h>
int main()
{
    int *m,**n,***p;
    int a=8;
    m=&a;
    n=&m;
    p=&n;
    printf("\na= %d  *m= %d  **n= %d  ****p= %d\n",a,*m,**n,***p);
    printf("\n&a= %d  m= %d  *n= %d  ***p= %d\n",&a,m,*n,**p);
    printf("\n&m= %d  n= %d  **p= %d\n",&m,n,*p);
    printf("\n&n= %d  *p= %d\n",&n,p);
    return 0;
}