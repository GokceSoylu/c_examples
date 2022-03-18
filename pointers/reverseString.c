/* write a program in c to print a string in reverse using pointer */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char string[200],*p;
    int i,j;
    printf("\nstring giriniz lutfen");
    gets(string);
    for(i=0;string[i]!='\0';i++);
    i++;
    p=(char*)malloc(sizeof(char)*i);
    p=string;
    printf("\nstringin tersi\n");
    for(j=i-1;j>=0;j--)
        printf("%c",*(p+j));
    return 0;
}//pointer a stringi atadıktan sonra bu stringi artık silelim der free(string) yaparsan patlar çünkü pointer bir degisken degil hep o dizinin
//adresini tutup adresten eriserek degisik yapabilir string giderse erisemez bindigin dalı kesmis olursun :))