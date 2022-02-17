/* bir adamız var bu adada yalnız kalanlar ölüyor:( birlikten kuvvet dogar en uzun, en kalabalık birlik yasar (1 ler insanları 0 lar boslugu temsil eder)*/
#include <stdio.h>//birliklerin ömur uzunluguna gore sıralanabilir
#include <stdlib.h>//olenler belirtilebilir
#include <time.h>//son hali yazdırılabilir-->hikaye guzel olursa rahat satarsın :)
void fonksiyon (int[][100],int ,int ,int[][100],int, int, int, int);//mesela sadece asker sayısı belirteni bulup aynı kodu farklı hikayeylede yazabilirsin
int main()
{
    int n,m,i,j,t=0,gecici,counter=0;
    srand(time(NULL));
    printf("\nadamızı olusturmak icin satır ve sutun sayısı giriniz lutfen\nsatir; ");
    scanf("%d",&n);
    printf("\nsutun;");
    scanf("%d",&m);
    int ada[100][100],kontrol[100][100],dizi[1000],yedek[1000];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            ada[i][j]=rand()%2;
        }
    }
    printf("\nADA\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%2d",ada[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(ada[i][j]==1 && kontrol[i][j]!=1)
            {
                t++;
                fonksiyon(ada,n,m,kontrol,n,i,j,dizi[t]);
                printf("\nkabile%d kisi sayısı: %d konumu: %d,%d\n",t,dizi[t],i+1,j+1);
                yedek[t]=dizi[t];
            }
        }
    }
    printf("\n kontrol\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(kontrol[i][j]==1)
                printf(" X ");
            else
                printf(" - ");
        }
        printf("\n");
    }
    for(i=0;i<t+1;i++)
    {
        for(j=i;j<t+1;j++)
        {
            gecici=dizi[i];
            dizi[i]=dizi[j];
            dizi[j]=gecici;
        }
    }
    i=0;
    while(1)
    {
        if(yedek[i]==dizi[i])
        {
            printf("\nkabile%d : %d\n",i,yedek[i]);
            yedek[i]=0;
            counter++;
        }
        if(counter==t)
            break;
    }
    return 0;
}
void fonksiyon (int matris[][100],int n, int m, int kontrol[][100],int x,int i, int j,int dizi)//x=m
{
    int a,b;
    for(a=i;a<n;a++)
    {
        if(a!=i)
        {
            for(b=j;b<m;b++)
            {
                if(matris[a][b]==1)
                {
                    dizi++;
                    kontrol[a][b]=1;
                    
                }
                else
                    break;
            }
            for(b=j-1;b>-1;b--)
            {
                if(matris[a][b]==1)
                {
                    dizi++;
                    kontrol[a][b]=1;
                }
                else
                    break;
            }
        }
        else
            for(b=j;b<m;b++)
            {
                
                if(matris[a][b]==1)
                {
                    dizi++;
                    kontrol[a][b]=1;
                }
                else
                    break;
            }
    }
}



