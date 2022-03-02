/* pointersla bier hafıza alanına birden farklı yolla erişebildiiğimiz için her erişebilen de degiskenimiz uzerinde degisklikler yapabilir */
#include <stdio.h>
int main()
{
    int x=10;
    printf("\nx = %d",x);
    int *p,**n;
    p=&x;
    *p=15;//dikkat
    printf("\nx = *p = %d",*p);
    n=&p;
    **n=20;//dikkat
    printf("\nx = *p = **n = %d",**n);
    return 0;
}