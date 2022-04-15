/* kullanıcıdan alınan cumlde yine kullanıcıdan alınan kelmeden kac adet oldugunu bulur */
#include <stdio.h>
#include <string.h>
int main()
{
    int i=0,j,counter=0;
    char array[50],a[20],try[20];
    printf("metni giirniz lutfen ");
    gets(array);
    printf("aramak istediginiz kelimeyi giriniz lutfen ");
    gets(a);
    while(array[i])
    {
        if(i==0 || array[i-1]==' ')
        {
            for(j=0;array[j+i]!=' ';j++)
                try[j]=array[j+i];
            try[j]='\0';//dikkat!            
            if(strcmp(try,a)==0)
                counter++;
        }
        i++;
    }
    printf("aranan kelime cumlede %d defa gecmektedir",counter);
    return 0;
}