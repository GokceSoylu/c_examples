#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *m, n=5;
    m=(int*)malloc(sizeof(int));
    *m=10;
    printf("\n%d",*m);
    free(m);
    m=&n;
    printf("\n%d",*m);
    return 0;
}//free() fonksiyonu pointerın tuttuğu alanı özgür bırakır pointerin kendisini silmez