/* klavyeden girilen NxN tiipindeki matrisin her bir satır elemanlarını kendi aralarında küçükte büyüüğe sıralar */
#include <stdio.h>
int main()
{
    int n;
    printf("\nmatrisin tipini giriniz lutfen (NxN)");
    scanf("%d",&n);
    int matris[n][n],i,j,k,gecici;
    printf("\nmatrisin elemanlarını giriniz lutfen");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&matris[i][j]);
        }
    }
    printf("\n\ngirilen mtaris\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%3d",matris[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=j;k<n;k++)
            {
                if(matris[i][j]>matris[i][k])
                {
                    gecici=matris[i][j];
                    matris[i][j]=matris[i][k];
                    matris[i][k]=gecici;
                }
            }
        }
    }
    printf("\n\nmatrisin sıralanmıs hali;\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%3d",matris[i][j]);
        }
        printf("\n");
    }
    return 0;
}