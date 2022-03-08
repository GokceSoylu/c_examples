/* typedef kullanarak matris yapalım */
#include <stdio.h>
int main()
{
    typedef int fourElement[4];
    fourElement a[4]={0};//what is a? a iki boyutlu bir matristir int a[4][4]; demekle ayni seyi yaptik - yazdırıp gormek için ilk deger atamasi yaptim
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}