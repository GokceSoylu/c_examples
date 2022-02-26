/* game of life (proje2 from canerozcan.net) oyununu yazabilmek için denem amaçlı yazdım*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define satir 3
#define sutun 3
char yedek[satir][sutun];
void tarama(char[][sutun],int,int);
int main()
{
    int i,j,counter=0,n;
    char matris[satir][sutun];
    srand(time(NULL));
    for(i=0;i<satir;i++)
    {
        for(j=0;j<sutun;j++)
        {
            n=rand()%2;
            if(n==0)
                matris[i][j]='X';
            else 
                matris[i][j]='-';
            printf("%2c",matris[i][j]);
        }
        printf("\n");
    }
    while(counter!=3)
    {
        printf("\n\n%d. Jenerasyon\n\n",counter+1);
        for(i=0;i<satir;i++)
        {
            for(j=0;j<sutun;j++)
            {
                tarama(matris,i,j);
            }
        }
        for(i=0;i<satir;i++)
        {
            for(j=0;j<sutun;j++)
            {
                printf("%2c",yedek[i][j]);
                matris[i][j]=yedek[i][j];
            }
            printf("\n");
        }
        counter++;
    }
    return 0;
}
void tarama(char matris[][sutun],int i, int j)
{
    int k,l,komsu=0;
    if(i==0 )//komsu sayıisini kontrol ediyoruz
    {
        if(j==0)
        {
            if(matris[i][j+1]=='X')
                komsu++;   
            if(matris[i+1][j]=='X')
                komsu++;
        }
        else 
        {
            if(matris[i+1][j]=='X')
                komsu++;
            if(matris[i][j+1]=='X')
                komsu++;
            if(matris[i][j-1]=='X')
                komsu++;
        }
    }
    else if(j==0)
    {
        if(matris[i][j+1]=='X')
            komsu++;
        if(matris[i+1][j]=='X')
            komsu++;
        if(matris[i-1][j]=='X')
            komsu++;
    }
    else if(i==satir-1)
    {
        if(j==sutun-1)
        {
            if(matris[i][j-1]=='X')
                komsu++;
            if(matris[i-1][j]=='X')
                komsu++;
        }
        else
        {
            if(matris[i-1][j]=='X')
                komsu++;
            if(matris[i][j-1]=='X')
                komsu++;
            if(matris[i][j+1]=='X')
                komsu++;
        }
    }
    else
    {
        if(matris[i+1][j]=='X')
            komsu++;
        if(matris[i-1][j]=='X')
            komsu++;

        if(matris[i][j+1]=='X')
            komsu++;
        if(matris[i][j-1]=='X')
            komsu++;
    }
    if(matris[i][j]=='X')//yasayan hücremiz 3 ten fazla komsusu varsa kalabalıktan(bu ben:) ), 0 yada 1 komsusu varsa yanlızlıktan ölür. eğer 2 veya 3 adet komşusu varsa da yaşamaya devam eder.
    {
        if(komsu==0 || komsu==1)
            yedek[i][j]='O';
        else if(komsu>3)
            yedek[i][j]='O';
        else if(komsu==2 || komsu==3)
            yedek[i][j]='X';
        
    }
    else if(matris[i][j]=='-')//boş hücrenin üç komşusu varsa yeni hücre doğar.
        if(komsu==3)
            yedek[i][j]='X';
        else
            yedek[i][j]='-';
    else if(matris[i][j]=='O')
        yedek[i][j]='O';
    
}