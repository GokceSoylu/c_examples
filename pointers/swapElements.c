/* write a program in c to swap elements usuin pointer */
#include <stdio.h>
#define size 10
int main()
{
    int array[size]={0,1,2,3,4,5,6,7,8,9},i,*p=array,gecici;
    printf("\nthe array before swapping\n");
    for(i=0;i<size;i++)
        printf("%d ",*(p+i));
    for(i=0;i<size/2;i++)
    {
        gecici=*(p+i);
        *(p+i)=*(p+size-i-1);
        *(p+size-i-1)=gecici;
    }
    printf("\nthe array after swapping\n");
    for(i=0;i<size;i++)
        printf("%d ",*(p+i));
    return 0;
}