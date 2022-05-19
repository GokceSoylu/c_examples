#include <stdio.h>
int main()
{
    int a, b;
    float c;
    FILE *p;
    p=fopen("text","r");
    while(!feof(p))
    {
        fscanf(p,"%d%d%f",&a,&b,&c);
        printf("\n%d\n%d\n%f",a,b,c);
    }    
    fclose(p);
    return 0;
}