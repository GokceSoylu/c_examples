/* mormalde değişkeni fwrite fonksiyonuna & ile veriyoruz adrese ulaşabilmesi ama stringin adı zatem adres olduğu için &'sız verebilir miyiz? */
#include <stdio.h>
int main()
{
    FILE *p, *pp;
    char name[]="Necmiye Soylu",print[14];
    p=fopen("trying","w+");
    fwrite(name,sizeof(char)*14,1,p);
    rewind(p);
    fread(print,sizeof(char)*24,1,p);
    printf("\n%s",print);
    fclose(p);
    return 0;
}//evet oluyor👍🏻