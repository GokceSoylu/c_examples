/* kelimede bir harften sadece bir tane bulunmasını saglayan c programı hasancan -> hasnc */
#include <stdio.h>
void kaydirma(char[], int);
int main()
{
    int i=0,j;
    char array[20];
    gets(array);
    while(array[i])
    {
        j=i+1;
        while(array[j])
            if(array[i]==array[j])
                kaydirma(array,j);
            else
                j++;
        i++;
    }
    puts(array);
    return 0;
}
void kaydirma(char a[], int j)
{
    while(a[j])
    {
        a[j]=a[j+1];
        j++;
    }    
}// :))
