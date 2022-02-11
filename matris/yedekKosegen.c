/*klavyede girilen NxN tipindeki A matrisnde ydedek kosegene paralel sanal kosegenler uzerindeki elemanlar toplamından b dizisini olusturur. Bu diznin en buyuk ve kucuk elemanını bulur */
#include <stdio.h>
int main()
{
    int n, i, j, k, max, min,sum=0;
    printf("matrisin tipini giriniz lutfen (NxN)");
    scanf("%d",&n);
    int matris[n][n], b[2*n-1];
    printf("matrisin elemanlarını giriniz lutfen");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&matris[i][j]);
        }
    }
    printf("\n\n --matris--\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%3d",matris[i][j]);
        }
        printf("\n");
    }
    for(k=0;k<2*n-1;k++)
    {
        sum=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i+j==k)
                    sum+=matris[i][j];
            }
        }
        b[k]=sum;
    }
    max=b[0];
    min=b[0];
    printf("\n\nb dizisi;\n");
    for(i=0;i<2*n-1;i++)
    {
        if(max<b[i])
            max=b[i];
        if(min>b[i])
            min=b[i];
        printf("%3d",b[i]);
    }
    printf("\nb dizisinin en buyuk elemani %d, en kucuk elemanı %d",max,min);
    return 0;
}
