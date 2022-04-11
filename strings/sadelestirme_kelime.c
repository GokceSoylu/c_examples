/* bir kelimede arka arkaya tekrar eden harfleri sadeleştiren c programı */
#include <stdio.h>
void kaydirma(char[],int);
int main()
{
    int i=0;
    char array[20];
    gets(array);
    while(array[i])
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
    while(a[i])
    {
        a[i+1]=a[i+2];
        i++;
    }    
}