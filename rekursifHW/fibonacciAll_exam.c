/* ilk n fibonacci sayısını yazdıran C programı */
#include <stdio.h>
int f(int);
int main()
{
    int n,i;
    printf("kac adet fibonacci sayısını yazdırmak istersiniz? ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        printf("%d ",f(i));
    return 0;
}
int f(int a)
{
    if(a==0 || a==1)
        return 1;
    else
        return f(a-1)+f(a-2);
}