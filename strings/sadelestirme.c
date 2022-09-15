/* Simplifies consecutive elements in array 5552211221 */

#include <stdio.h>

void shifting(char[],int);
void simplfying(char []);

int main()
{
    int i=0;
    char array[]="5552211221";
    simplifying(array);
    puts(array);
    return 0;
}

void simplifying(char array[])
{
    int i;
    while(array[i]!='\0')
    {
        if(array[i]==array[i+1])
            shifting(array,i);
        else
            i++;
    }
}

void shifting(char a[],int i)
{
    for(;a[i]!='\0';i++)
        a[i]=a[i+1];    
}
