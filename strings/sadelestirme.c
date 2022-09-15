/* 5552211221 dizisininde arka arkaya tekrar eden elemanları sadeştirir */

#include <stdio.h>

void kaydirma(char[],int);
void sadelestirme(char []);

int main()
{
    int i=0;
    char array[]="5552211221";
    sadelestirme(array);
    puts(array);
    return 0;
}

void sadelestirme(char array[])
{
    int i;
    while(array[i]!='\0')
    {
        if(array[i]==array[i+1])
            kaydirma(array,i);
        else
            i++;
    }
}
void kaydirma(char a[],int i)
{
    for(;a[i]!='\0';i++)
        a[i]=a[i+1];    
}