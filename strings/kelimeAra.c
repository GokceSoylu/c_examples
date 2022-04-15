/* cümlede istenen kelimeyi arar */
#include <stdio.h>//iki boşlik arası string cmp
#include <string.h>
int main()
{
    int i=0,j,flag=0;
    char array[50],a[20],try[20];
    printf("metni giriniz ");
    gets(array);
    printf("aramak istediginiz keimeyi giriniz lutfen ");
    gets(a);
    while(array[i])
    {
        for(j=0;j<strlen(a);j++) 
        {
            flag=0;
            if(a[j]==array[i+j])
                flag=1;
            else
                break;
        }        
        i++; 
    }
    if(flag==1)
        printf("cümlede aranan kelime bulunmaktadır\n");
    else
        printf("aranan kelime cümlede bulunmamaktadır\n");
    return 0;
}