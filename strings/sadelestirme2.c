/* 5552211221 dizisinde bir elemandan bir kez bulunmasını sağlayınız çıktı 521 seklinde olmalıdır */
#include <stdio.h>
void kaydirma(char[], int);//good :)
int main()
{
    char array[]="5552211221";
    int i=0,j=0;
    while(array[i])
    {
        j=i+1;
        while(array[j])
        {
            if(array[i]==array[j])
            {
                kaydirma(array,i);
                i--;
                break;
            }        
            j++;
        }     
        i++;
    }
    puts(array);
    return 0;
}
void kaydirma(char a[], int i)
{
    while(a[i++])
        a[i]=a[i+1];
}
