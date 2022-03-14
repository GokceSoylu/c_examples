/* en kısa yolu bukna c programı ;) */
#include <stdio.h>//matrisi pointera atayıp verelim
void yolcu (int *[],int,int,int);//!!!!! NOT WORK !!!!!!
int main()
{
    int matris[6][12]={1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,1,1,1,1,0,1,0,0,0,1,1,1,1,1,1,1,0,1,0,1,0,0,1,0,1,0,1,0,1,1,1,1,1,0,1,0,1,1,1,1,1,0,0,0,1,1,1,1,0,1,1,1,1,1,1,1,1},(*p)[12]=matris,i,j;
    i=j=0;
    yolcu(p,6,i,j);
    for(i=0;i<6;i++)
    {
        for(j=0;j<12;j++)
            printf("%d ",matris[i][j]);
        printf("\n");
    }
    return 0;
}
void yolcu(int *p[],int size, int i, int j)//sınırda olup olmadıgımızı kontrol etmedik ama gerek yok bence zaten sınıra gelmısse o deer 1 olamaz :)
{
    static int yedeki=0, yedekj=0;
    p[i][j]=8;
    if(p[i+1][j]==1 && p[i][j+1]==1)
    {
        yedeki=i;
        yedekj=j+1;
    }
    if(p[i+1][j]==1)
        yolcu(p,size,i+1,j);
    else if(p[i][j+1]==1)
        yolcu(p,size,i,j+1);
    else
        yolcu(p,size,yedeki,yedekj);
}
