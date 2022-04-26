#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char a[50],array[5][20],*p,ekle[20];
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
    for(i=0;i<k;i++)
        for(j=i+1;j<k;j++)
            if(strlen(array[i])>strlen(array[j]))
            { 
                strcpy(ekle,array[j]);
                strcpy(array[j],array[i]);
                strcpy(array[i],ekle);
            }
    printf("\n");
    for(i=0;i<k;i++)
        printf("%s  ",array[i]);
    return 0;
}