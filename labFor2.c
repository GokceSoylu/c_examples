#include <stdio.h>
int main()
{
    int i, j, k;
    for(i=0;i<4;i++)
    {    
        for(j=0;j<8;j++)
            if(j==0 || j==5)
                for(k=0;k<=i;k++, j++)
                    printf("*");
            else
                printf(" ");
        printf("\n");
    }
    return 0;
}