#include <stdio.h>
int main()
{
    int i, j, m, key=3;  
    for(i=0;i<4;i++)
    {
        for(j=0;j<7;j++)
            if(j==key)
            {
                for(m=0;m<=i && j<3 ;m++, j++)
                    printf("%c",65+m);
                for(;m>0;m--)
                    printf("%c",65+m);
                key--;
            }
            else
                printf(" ");
        printf("\n");
    }    
    return 0;
}