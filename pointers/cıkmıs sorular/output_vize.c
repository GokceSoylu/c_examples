/* verileb koda gercek ogrenci numaranızı girdiginizde alacagınız cıktıyı bulunuz */
#include <stdio.h>
void fun1(int*, int, int);
void swap(int*, int, int);
int main()
{
    int StudentNumber[15]={2,0,1,0,2,1,3,0,0,1};
    int i=0,k,ReadNum;
    //printf("Please enter your Student number then press -1 buttun");
    /*while(1)
    {
        ReadNum=getchar();
        if(ReadNum== -1) break;
        putchar(ReadNum);
        StudentNumber[i]=(int)(ReadNum-'0');
        i++;
    }
    */
   i=10;
   fun1(StudentNumber,0,i-1);
    printf("\nThe array after fun1\n");
    for(k=0;k<i;k++)
        printf("%d ",StudentNumber[k]);
    return 0;
}
void fun1 (int *array, int leftIndex, int rightIndex)
{
    if(array[leftIndex]>array[rightIndex])
    {
        swap(array,leftIndex,rightIndex);
        fun1(array,leftIndex+1,rightIndex-1);
    }
}
void swap(int *array, int leftIndex, int rightIndex)
{
    int temp;
    if(array[leftIndex]>array[rightIndex])
    {
        temp=array[leftIndex];
        array[leftIndex]=array[rightIndex];
        array[rightIndex]=temp;
    }
}
