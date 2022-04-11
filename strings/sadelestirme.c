/* 5552211221 dizisininde arka arkaya tekrar eden elemanları sadeştiriniz */
#include <stdio.h>//I think good
void kaydirma(char[],int);
int main()
{
    int i=0;
    char array[]="5552211221";
    while(array[i]!='\0')
    {
        if(array[i]==array[i+1])
            kaydirma(array,i);
        else
            i++;
    }
    puts(array);
    return 0;
}
void kaydirma(char a[],int i)
{
    while(a[i]!='\0')
    {
        a[i]=a[i+1];
        i++;
    }    
}