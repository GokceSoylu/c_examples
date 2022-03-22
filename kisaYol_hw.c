/* en kısa yolu bukna c programı ;) */
#include <stdio.h>
void yolcu (int [][12],int,int,int);//!!!!! NOT WORK !!!!!!
int main()
{
    int p[6][12]={1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,1,1,1,1,0,1,0,0,0,1,1,1,1,1,1,1,0,1,0,1,0,0,1,0,1,0,1,0,1,1,1,1,1,0,1,0,1,1,1,1,1,0,0,0,1,1,1,1,0,1,1,1,1,1,1,1,1},i,j;
    int size=6;
    i=j=0;
    yolcu(p,size,i,j);
    for(i=0;i<6;i++)
    {
        for(j=0;j<12;j++)
            printf("%d ",p[i][j]);
        printf("\n");
    }
    return 0;
}
void yolcu(int p[][12],int size, int i, int j)//acaba sınır kontrolu yapmıyoruz sınırı asıyor onu mu dert etti?
{
    static int yedeki=0, yedekj=0;// i max=5   j max=11
    if(p[i+1][j]==1 && p[i][j+1]==1)
    {
        yedeki=i;
        yedekj=j+1;
    }
    if(p[i+1][j]==1)//buradad mesala i yi kontrol ederken sınırı asıyor ve segmnetatoin fault veriyor 
        yolcu(p,size,i+1,j);
    else if(p[i][j+1]==1)
        yolcu(p,size,i,j+1);
    else if(i!=5 || j!=11 )//buraya tekrar bakabilirsin  
        yolcu(p,size,yedeki,yedekj);
    p[i][j]=8;
    if(i==5 && j==11)
        return;
}
