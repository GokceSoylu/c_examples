/* kullanıcıdan alınan cumlede kac adet kelime oldugunu sayan c programı :) */
#include <stdio.h>
void sadelestir(char[]);//i yi koruyarak kaydıralım
int  main()
{
    int i,counter=1;
    char array[50];
    gets(array);
    sadelestir(array);
    for(i=0;array[i];i++)
        if(array[i]==' ')
            counter++;
    printf("girilen metinde %d kelime vardir",counter);
    return 0;
}
void sadelestir(char a[])
{
    int i=0;
    while(a[i])
    {
        if(a[i]==a[i+1] && a[i]==' ')
            a[i+1]=a[i+2];
        else
            i++;
    }
}