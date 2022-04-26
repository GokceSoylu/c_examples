/* strcpy pointera atama denemesi */
#include <stdio.h>
#include <string.h>
#include  <stdlib.h>
int main()
{
    char a[20], b[20]="necmiye soylu";
    char *p;// bu haliyle p char tipindeki bir değişkenşn adresine tutabilir
    p=(char*)malloc(20*sizeof(char));// şu an ise artik p ye char atayabilirsin
    printf("\n%s",b);
    printf("\n%s\n",a);
    strcpy(a,b);
    puts(a);
    strcpy(p,b);
    puts(p);
    return 0;
}// pointera atayabilmek için pointera hazidan yer açmamız gerekiyor!