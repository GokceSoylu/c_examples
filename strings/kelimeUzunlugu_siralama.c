/* kullanıcı tarafından girilen metindeki kelimeleri kelime uzunluguna gore sıralayıp yazdıran c programını yazınız */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char a[50],*p,array[5],tmp;
    int k=0,i,j;
    for(i=0;i<5;i++)
        array=(char*)malloc(5*sizeof(char));
    gets(a);
    p=strtok(a," ");
    array[k]=*p;
    while(1)
    {
        p=strtok(NULL," ");
        if(p==NULL) break;
        printf("\n%s",p);
        //k++;
        //array[k]=*p;
    }
    //array[k+1]='\0';
    //printf("\n%s",array);
    /*for(i=1;i<k;i++)
    { 
        tmp=array[i];
        for(j=i-1;strlen(&array[j])>strlen(&tmp) && j>0;j--)
        {
            array[j+1]=array[j];
            array[j]=tmp;
        }
    }
    printf("\n%s",array);
    */return 0;
}
