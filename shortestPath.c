#include <stdio.h>
void f_assagi(int i, int j, int m[][12]);
void f_saga(int i, int j, int m[][12]);
int main()
{
    int i,j,m[6][12]={1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,1,1,1,1,0,1,0,0,0,1,1,1,1,1,1,1,0,1,0,1,0,0,1,0,1,0,1,0,1,1,1,1,1,0,1,0,1,1,1,1,1,0,0,0,1,1,1,1,0,1,1,1,1,1,1,1,1};
    for(i=0;i<6;i++)
    {
        for(j=0;j<12;j++)
            printf("  %d",m[i][j]);
        printf("\n");
    }
    f_assagi(0,0,m);
    printf("\n\nen kisa yol bukundu\n\n");
    for(i=0;i<6;i++)
    {
        for(j=0;j<12;j++)
            printf("  %d",m[i][j]);
        printf("\n");
    }
    return 0;
}
void f_assagi(int i, int j, int m[][12])//değişse yine tutar mı? analiz için elimizdeki labirentleri kullanalım 
{
    if(i==6 && j==12) return; 
    if(m[i+1][j]==1)
        f_assagi(i+1,j,m);
    else if(m[i][j+1]==1)
        f_saga(i,j+1,m);
    else
    {
        while(m[i][j+1]!=1) i--;
        f_saga(i,j+1,m);
    }    
    m[i][j]=2;
}
void f_saga(int i, int j, int m[][12])
{
    if(i==6 && j==12) return;
    if(m[i][j+1]==1)
        f_saga(i,j+1,m);
    else if(m[i+1][j]==1)
        f_assagi(i+1,j,m);
    else //bu da tutmuyorsa?
    {
        while(m[i+1][j]!=1) j--;
        f_assagi(i+1,j,m);
    }    
    m[i][j]=2;
}