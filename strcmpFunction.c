/* strcmp fonksiyonu iki stringi karsilaştirir aynı iseler 0 degillerse ilk farkli karakterin ascıı tablosun agore farkını dondurur */
#include <stdio.h>
int f(char*, char*);
int main()
{
    char p[]="necmiye",pp[]="sabriye",ptr[]="necmiye";
    printf("%d %d",f(p,pp),f(p,ptr));
    return 0;
}
int f(char *x, char *y)
{
    while(*x && *y && *x++==*y++);
    return (*x-*y);
}//afilli oldu :))