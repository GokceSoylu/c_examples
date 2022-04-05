/* for ++i, i++ farkı */
#include <stdio.h>
int main()
{
    int a[5]={1,2,3,4,5},i;
    for(i=0;i<5;++i)
        a[i]++;
    for(i=0;i<5;i++)
        printf("%d ",a[i]);
    printf("\n");
    for(i=0;i<10;++i)
        printf("%d ",i);
    return 0;
}//sonuc: fark yok :)