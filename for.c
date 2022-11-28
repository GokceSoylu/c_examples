#include <stdio.h>
int main()
{
    int i,j,k, t=0, n=3;
    for(i=1;i<n;i++)
    {
        printf("\ni = %d",i);
        for(j=1;j<n;j++)
        {
            printf("j = %d",j);
            for(k=1;k<n;k++)
            {
                t=t+i+j*k;
                printf("\nk = %d\nt = %d",k,t);
            }
            j=j+1;
        }
        t=t+i*i;
        printf("\nt = %d\n\n",t);
    }
    printf("\n\n\nsonuc = %d",t);
    return 0;
}