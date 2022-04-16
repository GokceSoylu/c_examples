/*cumlede istenen kelimeyi istediginiz baska bir kelimeyle degistiren c programına bakmaktasınız ;) */
#include <stdio.h>
#include <string.h>
int main()
{
    int i=0,j;
    char array[50],kelime[20],kelime2[20],try[20];
    printf("\ncumleyi giriniz lutfen ");
    gets(array);
    printf("\ndegistiremek istediginiz kelime: ");
    gets(kelime);
    printf("\nyerine yazılacak kelime ");
    gets(kelime2);
    while(array[i])
    {
        for(j=0;j<strlen(kelime);j++)
            try[j]=array[i+j];
        if(strcmp(try,kelime)==0)
            for(j=0;j<strlen(kelime);j++)
                array[i+j]=kelime2[j];
        i++;
    }
    printf("\n");
    puts(array);
    return 0;
}