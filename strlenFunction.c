/* strlen fonksiyonu bir stringin uzunlugnu bulur */
#include <stdio.h>
int f(char*);
int main()
{
    char p[]="sabriye gulsum soylu";
    printf("\nstringin uzunllıugu: %d",f(p));
    return 0;
}
int f(char *x)
{
    int i;
    while(*x++)
        i++;
    return i;
}