#include <stdio.h>
#define N 6
#define M 12
int way=N*M, control[N][M]={1,0}, shortPath[N][M]={0};
void shortest_path(int matris[][M], int i, int j, int short_way);
int main()
{
    int matris[N][M]={1,0,1,1,1,0,0,1,0,1,1,0,
                      1,0,1,1,1,1,1,0,1,0,0,0,
                      1,1,1,1,1,1,1,0,1,0,1,0,
                      0,1,0,1,0,1,0,1,1,1,1,1,
                      0,1,0,1,1,1,1,1,0,0,0,1,
                      1,1,1,0,1,1,1,1,1,1,1,1};
    int i,j;
    printf("\ncontrol matrisi\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
            printf("%d",control[i][j]);
        printf("\n");
    }
    printf("\nmatris\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
            printf("%3d",matris[i][j]);
        printf("\n");
    }
    shortest_path(matris,0,0,0);
    printf("\nen kisa yol bulundu\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
            printf("%3d",shortPath[i][j]);
        printf("\n");
    }
    return 0;
}
void shortest_path(int matris[][M], int i, int j, int short_way)
{
    int m, n;
    if(i==N-1 && j==M-1 && way>short_way+1)
    {
        way=short_way+1;
        for(m=0;m<N;m++)
            for(n=0;n<M;n++)
                shortPath[m][n]=control[m][n];
    }
    if(matris[i+1][j]==1 && control[i+1][j]==0)
    {
        control[i+1][j]=1;
        shortest_path(matris,i+1,j,short_way+1);
    }
    if(matris[i][j+1]==1 && control[i][j+1]==0)//control matrisi gerçekten önemli mi?
    {
        control[i][j+1]=1;
        shortest_path(matris,i,j+1,short_way+1);
    }
    if(matris[i][j-1]==1 && control[i][j-1]==0)
    {
        control[i][j-1]=1;
        shortest_path(matris,i,j-1,short_way+1);
    }
    if(matris[i-1][j]==1 && control[i-1][j]==0)
    {
        control[i-1][j]=1;
        shortest_path(matris,i-1,j,short_way+1);
    }
    control[i][j]=0;//r yapınca gectiğimiz yolda iz kalmasın diye var 
}