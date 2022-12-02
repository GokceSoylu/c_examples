#include <stdio.h>
#include <math.h>
float ort(int[],int);
float varyance(int[],int,int,float);
float standardDerivation(int[], int);
int main()
{
    int arr[6]={12,15,20,30,45,22};
    printf("\n%0.2f",ort(arr,6));
    printf("\nvaryance = %0.2f",varyance(arr,5,6,ort(arr,6)));
    printf("\nstandard derivation = %0.2f",standardDerivation(arr,6));
    return 0;
}
float ort(int arr[], int indis)
{
    int i, ort=0;
    for(i=0;i<indis;i++) ort+=arr[i];
        return (float)ort/indis;
}
float varyance(int arr[], int indis, int i,float ort)
{
    if(indis==-1) return 0;
    return (float)pow((arr[indis]-ort),2)/i+varyance(arr,indis-1,i,ort);
}
float standardDerivation(int arr[],int n)
{
    return (float)sqrt(varyance(arr,n-1,n,ort(arr,n)));
}
