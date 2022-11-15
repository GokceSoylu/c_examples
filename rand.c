#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int a=rand();
    printf("%d",a);
    
    a=rand()%10;//rand() rastgele sayo üretti bende bunun modeunu aldım
    printf("\n%d",a);
    return 0;
}