/* izmir kelimesini çarpraz alt alta yazdırır */
#include <stdio.h>
int main()
{
    int matris[8][25],i,j;
    for(i=0;i<8;i++)
    {
        for(j=0;j<24;j++)
        {
            if(j==i*3)
                printf("izmir");
            else
                printf(" ");
        }
        printf("\n");
        
    }
    return 0;
}