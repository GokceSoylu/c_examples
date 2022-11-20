#include <stdio.h>
int main()
{
    int i,j,k, t=0, n=3;
    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            for(k=1;k<n;k++)
            {
                t=t+i+j*k;
            }
            j=j+1;
        }
        t=t+i*i;
    }
    printf("%d",t);
    return 0;
}