#include <stdio.h>
int f(int);
int  main()
{
    int n;
    printf("fibonacci dizisinin kacıncı elemnını yazdırmak istersiniz");
    scanf("%d",&n);
    printf("%d",f(n));
    return 0;
}
int f(int a)
{
    if(a==1 || a==0)
        return 1;
    else
        return (f(a-1)+f(a-2));
}