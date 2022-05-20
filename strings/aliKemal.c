/* girilen stringde tarka arkaya ekrar eden harfleri silen c programı. or. aliiikkemal--> alikemal */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i=0,j;
    char s[50],*p;
    printf("\ngridiginiz metinde arka arkaya tekrar eden harfler silinecektir\nmetni giriniz lutfen ");
    gets(s);/
    while(s[i]!='\0')
    {
        if(s[i]==s[i+1])
        {
            for(j=i;s[j]==s[i];j++)
                s[j]=' ';
            i=j;
        }
        else
            i++;
    }
    j=0;
    p=(char*)malloc(sizeof(char));
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]!=' ')
        {
            *(p+j)=s[i];
            j++;
            p=realloc(p,(j+1)*sizeof(char));
        }
    }
    printf("\n%s",p);
    return 0;
}