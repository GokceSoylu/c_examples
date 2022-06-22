/* en kısa yolu bulan c programı ;) */
#include <stdio.h>
void yolcu (int [][12],int,int);
int main()
{
    int p[6][12]={1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,1,1,1,1,0,1,0,0,0,1,1,1,1,1,1,1,0,1,0,1,0,0,1,0,1,0,1,0,1,1,1,1,1,0,1,0,1,1,1,1,1,0,0,0,1,1,1,1,0,1,1,1,1,1,1,1,1},i,j;
    yolcu(p,0,0);
    for(i=0;i<6;i++)
    {
        for(j=0;j<12;j++)
            printf("%d ",p[i][j]);
        printf("\n");
    }
    return 0;
}
void yolcu(int p[6][12], int i, int j)
{
    static int yedeki=0, yedekj=0;
    if(i==5 && j==11) return; 
    if(p[i+1][j]==1 && p[i][j+1]==1)
    {
        yedeki=i+1;
        yedekj=j;
    }
    if(p[i][j+1]==1) yolcu(p,i,j+1); 
    else if(p[i+1][j]==1) yolcu(p,i+1,j);
    else yolcu(p,yedeki,yedekj);
    p[i][j]=5;
}
