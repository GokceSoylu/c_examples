/* stringin uzunlugunu bulan fonksiyon bu sefer for ile */
#include <stdio.h>
int f(char*);
int main()
{
    char p[]="sabriye gulsum soylu";
    printf("\nstrimgşn uzunlugu: %d",f(p));
    return 0;
}
int f(char *x)
{
    int i;
    for(i=0;*x;i++);
    return i;
}