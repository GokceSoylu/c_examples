#include <stdio.h>
int main()
{
    int a=10, b=15, x, y;
    float c=10.15, z;
    FILE *p, *pp;
    p=fopen("text","w");
    fprintf(p,"%d\n%d\n%f",a,b,c);
    fclose(p);
    pp=fopen("text","r");
    fscanf(pp,"%d%d%f",&x,&y,&z);
    printf("\n%d\n%d\n%.2f",x,y,z);
    fclose(pp);
    return 0;
}
