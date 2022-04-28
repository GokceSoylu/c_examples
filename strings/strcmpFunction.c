/* strcmp fonksiyonu iki stringi karsilaştirir aynı iseler 0 degillers ise ilk farkli karakterin ascıı tablosuna gore farkını dondurur */
#include <stdio.h>
int f(char*, char*);
int main()
{
    char p[]="necmiye",pp[]="sabriye",ptr[]="a";
    printf("%d %d",f(p,pp),f(pp,ptr));
    return 0;
}
int f(char *x, char *y)
{
    while(*x && *y && *x==*y) x++,y++;
    return (*x-*y);
}//afilli oldu :))