/* en kısa yolu bukna c programı ;) */
#include <stdio.h>
void yolcu (int [][12],int,int,int);//!!!!! NOT WORK !!!!!!
int main()
{
    int p[6][12]={1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,1,1,1,1,0,1,0,0,0,1,1,1,1,1,1,1,0,1,0,1,0,0,1,0,1,0,1,0,1,1,1,1,1,0,1,0,1,1,1,1,1,0,0,0,1,1,1,1,0,1,1,1,1,1,1,1,1},i,j;
    i=j=0;
    yolcu(p,6,i,j);
    for(i=0;i<6;i++)
    {
        for(j=0;j<12;j++)
            printf("%d ",p[i][j]);
        printf("\n");
    }
    return 0;
}
void yolcu(int p[][12],int size, int i, int j)//sınırda olup olmadıgımızı kontrol etmedik ama gerek yok bence zaten sınıra gelmısse o deger 1 olamaz :)
{
    static int yedeki=0, yedekj=0;//assagi gecme sansi yokm surekli arttşiriyoruz hayııır j yı i yı surekli arrtıramama gadi i okey ama j sıfırlnıyo
    if(p[i+1][j]==1 && p[i][j+1]==1)
    {
        yedeki=i+1;
        yedekj=j+1;
    }
    if(p[i+1][j]==1)
        yolcu(p,size,i+1,j);
    else if(p[i][j+1]==1)
        yolcu(p,size,i,j+1);
    else
        yolcu(p,size,yedeki,yedekj);
    p[i][j]=8;
    if(i==5 && j==11)
        return;
}
