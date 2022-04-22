/* arada bosluk bırakarak iki stringi birleştiren fonksiyon */
#include <stdio.h>
void f(char*, char*);
int main()
{
    char m[11]="murat",n[]="soylu";
    f(m,n);
    printf("\n%s",m);
    return 0;
}
void f(char *k, char *l)
{
    char *p=k;
    while(*p)
        p++;
    *p++=' ';//bunu çok begendim :)
    while(*l)
        *p++=*l++;
}
