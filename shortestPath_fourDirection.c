#include <stdio.h>
#define N 6
#define M 12 
void down(int i, int j, int m[][M]);
void right(int i, int j, int m[][M]);
void left(int i, int j, int m[][M]);
void up(int i, int j, int m[][M]);
int main()
{
    int i, j, m[N][M]={1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,1,1,1,1,0,1,0,0,0,1,1,1,1,1,1,1,0,1,0,1,0,0,1,0,1,0,1,0,1,1,1,1,1,0,1,0,1,1,1,1,1,0,0,0,1,1,1,1,0,1,1,1,1,1,1,1,1};
    for(i=0;i<N;i++)
    {   
        for(j=0;j<M;j++)
            printf("  %d",m[i][j]);
        printf("\n");
    }
    down(0,0,m);
    printf("\nen kısa yol bulundu :))\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
            printf("  %d",m[i][j]);
        printf("\n");
    }
    return 0;
}
void down(int i, int j, int m[N][M])
{
    if(i==N-1 && j==M-1) return;
    if(m[i+1][j]==1) down(i+1,j,m);
    else if(m[i][j+1]==1) right(i,j+1,m);
    else if(m[i][j-1]==1) left(i,j-1,m);
    else if (m[i-1][j]==1) up(i-1,j,m);
    m[i][j]=2;
}
void right(int i, int j, int m[N][M])
{
    if(i== M-1 && j==N-1) return;
    if(m[i][j+1]==1) right(i,j+1,m);
    else if(m[i+1][j]==1) down(i+1,j,m);
    else if(m[i-1][j]==1) up(i-1,j,m);
    else if(m[i][j-1]==1) left(i,j-1,m);
    m[i][j]=2;
}
void left(int i, int j, int m[N][M])
{
    if(i==N-1 && j==M-1) return;
    if(m[i][j-1]==1) left(i,j-1,m);
    else if(m[i+1][j]==1) down(i+1,j,m);
    else if(m[i-1][j]==1) up(i-1,j,m);
    else if(m[i][j+1]==1) right(i,j+1,m);
    m[i][j]=2;
}
void up(int i, int j, int m[N][M])
{
    if(i==N-1 && j==M-1) return;
    if(m[i-1][j]==1) up(i-1,j,m);
    else if(m[i][j+1]==1) right(i,j+1,m);
    else if(m[i][j-1]==1) left(i,j-1,m);
    else if(m[i+1][j]==1) down(i+1,j,m);
    m[i][j]=2;
}