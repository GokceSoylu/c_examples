/* dizinin en buyuk elemanını bulan rekursif fonksiyon, analizini yapabilenin gözlerinden hürmetle öperim :)) */
#include <stdio.h>
int fonk(int[],int);
int main()
{
    int a[7]={1,3,45,67,7,88,72};
    printf("dizinin en buyuk elemanı: %d",fonk(a,7));
    return 0;
}
int fonk(int array[],int y)
{
    int s;
    if(y==0)
        return array[0];
    else
        s=fonk(array,y-1);
    if(s>array[y-1])
        return s;
    else
        return array[y-1];

}