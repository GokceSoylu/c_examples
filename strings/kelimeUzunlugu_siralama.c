/* kullanıcı tarafından girilen metindeki kelimeleri kelime uzunluguna gore sıralayıp yazdıran c programını yazınız */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char array[50],a[5][10],*p,*ekle;
    ekle=(char*)malloc(10*sizeof(char));
    int i,j,n=0;
    printf("\nmetni giriniz lutfen  ");
    gets(array);
    p=strtok(array," ");
    while(p!=NULL)
    {
        strcpy(a[n],p);
        p=strtok(NULL," ");
        n++;
    }
    for(i=1;i<n;i++)
    {
        strcpy(ekle,a[i]);
        for(j=i-1;j>=0 && strlen(a[j])>strlen(ekle);j--)
        {
            strcpy(a[j+1],a[j]);
            strcpy(a[j],ekle);
        }
    }
    printf("\n");
    for(i=0;i<n;i++)
        printf("%s ",a[i]);
    return 0;
}