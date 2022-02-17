#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fonksiyon(int[][100], int, int, int, int, int[][100], int[], int);
int main()
{
    srand(time(NULL));
    static int i,satir,sutun,j,t,asker,matris[100][100],a,b,kontrol[100][100],troop[100],max,min,p,realtroop[100],sniper;
    printf("satir sayisini giriniz");
    scanf("%d",&satir);
    printf("sutun sayısını giriniz");
    scanf("%d",&sutun);
    printf("asker sayısını giriniz");
    scanf("%d",&asker);
    i=0;
    while(i<asker)
    {
        a=rand()%satir;
        b=rand()%sutun;
        if(matris[a][b]!=1)
        {
            matris[a][b]=1;
            i++;
        }
    }
    printf("\n\nsavas alanı\n\n\n");
    for(i=0;i<satir;i++)
    {
        for(j=0;j<sutun;j++)
        {
            if(matris[i][j]==1 && kontrol[i][j]!=0)
            {
                kontrol[i][j]=1;
                troop[t]++;
                fonksiyon(matris,i,j,satir,sutun,kontrol,troop,t);
                if(troop[t]==1)
                {
                    printf("\n%d,%d noktasında sniper var",i,j);

                }                
            }
        }   
    }
    max=0;
    min=0;
    p=0;
    for(i=0;i<t;i++)
    {
        if(troop[i]>1)
        {
            realtroop[i]=troop[i];
            p++;
        }
    }
    for(i=0;i<p;i++)
    {
        if(realtroop[min]>realtroop[i])
        {
            min=i;
        }
        if(realtroop[max]<realtroop[i])
        {
            max=i;
        }
    }
    printf("\nsniper sayısı: %d",sniper);
    printf("\n%dd adet birlik vardır",p);
    if(p>0)
    {
        if(p>1)
        {
            if(realtroop[min]!=realtroop[max])
            {
                printf("\nen buyuyk birlikteki asker sayısı %d",realtroop[max]);
                printf("\nen kucuk birlikteki asker sayısı %d",realtroop[min]);
            }
            else 
            printf("\nbirliklerin asker sayıları birbirine esit ve %d",realtroop[max]);
        }
        else
        {
            printf("\nbirlik sayısı %d",realtroop[0]);
        }
        
    }
    return 0;
}
void fonksiyon (int matris[][100],int i, int j, int satir, int sutun, int kontrol[][100], int troop[], int t)
{
    static int a,b;
    for(a=i-1;a<=i+1;a++)
    {
        for(b=j-1;b<=j+1;b++)
        {
            if(a>=0 && b>=0 && a<=satir && b<=sutun && matris[a][b]==1 && kontrol[a][b]==0)
            {
                troop[t]++;
                kontrol[a][b]=1;
                fonksiyon(matris,a,b,satir,sutun,kontrol,troop,t);
            } 
        }
    }
}