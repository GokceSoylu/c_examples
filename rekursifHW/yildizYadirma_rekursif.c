/* rekursif ornegi */
#include <stdio.h>
int sayi(int, int);
int yildiz(int);
int main()
{
    int a=4,b=2;
    yildiz(sayi(a,b));//afilli ;)
    return 0;
}
int sayi(int x, int y)
{
    if(x==0)
        return y;
    else    
        return sayi(x-1,y+x);
}
int yildiz(int w)
{
    int i;
    if(w!=0)
        yildiz(w-1);
    for(i=0;i<w;i++)
    {
        printf(" * ");
    }    
    printf("\n");    
        
}