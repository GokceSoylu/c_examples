/* bir cumlede arka arkaya tekrar eden kelimelri teke indiren c kodu */
#include <stdio.h>
#include <string.h>
void fonk(char array[], char array2[],char ctrl[], int *k);
int main()
{
    char array[50],array2[50],ctrl[20],i=0,j,k;
    gets(array);
    while(array[i])
    {
        j=0;
        if(array[i]==0 || array[i-1]=' ')
        {
            for(j=0;array[i+j!=' ';j++])
            {
                if(array[i+j]==' ') break;
                ctrl[j]=array[i+j];
            }
        }
        ctrl[]
        k=i+j;
        fonk(array,array2,ctrl,&k);
        i++;
    }
    puts(array2);
    return 0;
}
void fonk(char array[], char array2[],char ctrl[], int *k) //arttımak için kullan
{
    int i=0, j;
    while(1)
    {
        for(i=0;i<strlen(ctrl[i];i++)
        {    
            if(array[*k]==ctrl[i])
            {
                i++;
                *k++;
            }
            else break;
        }

    }
    

}