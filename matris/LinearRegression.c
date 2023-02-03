//
#include <stdio.h>
int main()
{
    int dots[4][2]={{2,1},{3,2},{7,3},{4,2}};
    int h=10000;
    int atmp, btmp,a, b, i;
    for(a=0;a<10;a++)
        for(b=0;b<10;b++)
            for(i=0;i<4;i++)
            {
                int htmp=(dots[i][1]-a-b*dots[i][0])* (dots[i][1]-a-b*dots[i][0]);
                if(htmp<h)
                {
                    h=htmp;
                    atmp=a;
                    btmp=b;
                }
            } 
    
    printf("a: %d\nb: %d",btmp,atmp);
    return 0;  
}