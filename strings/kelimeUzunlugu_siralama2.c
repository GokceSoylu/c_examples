#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char a[50],array[5][20],*p,*ekle;
    int k=0,i,j;
    printf("\nmetni giriniz lutfen ");
    gets(a);
    p=strtok(a," ");
    do
    {
        strcpy(array[k],p);
        k++;
        p=strtok(NULL," ");
    }   
    while(p!=NULL);
    for(i=0;i<k;i++)
        printf("%s ",array[i]);
    for(i=1;i<k;k++)
    {
        strcpy(ekle,array[i]);
        for(j=i-1;j>=0 && strlen(ekle)<strlen(array[j]);j--)
        {
            strcpy(array[j+1],array[j]);
            strcpy(array[j],ekle);
        }
    }
    printf("\n");
    for(i=0;i<k;i++)
        printf("%s  ",array[i]);
    return 0;
}