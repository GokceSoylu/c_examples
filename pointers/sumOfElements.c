/* write a program in c to compute sum of all elements in an array */
#include <stdio.h>
#define size 10
int main()
{
    int array[size]={0,1,2,3,4,5,6,7,8,9},i,*p=array,sum=0;
    printf("\nthe array\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",*(p+i));
        sum+=*(p+i);
    }
    printf("\nsum of all elements of the array = %d",sum);    
    return 0;
}