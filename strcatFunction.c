/* strcat fonksiyonu iki stringş birleştirir*/
#include <stdio.h>
void f(char*, char*);
int main()
{
    char a[12]="behice",b[]="soylu";
    f(a,b);
    printf("\n%s",a);
    return 0;
}
void f(char *x, char *y)
{
    char *p=x;
    while(*p)
        p++;
    while(*y)
        *p++=*y++;
}

