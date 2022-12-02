#include <stdio.h>
#include <math.h>
float standardDeviationSum(int[],int,float);
float standardDeviation(float, int);
float ort(int[],int);
int main()
{
    int arr[10]={1,20,30,40,1,5,200,60,120,900};//sum=1377 ort=137.7 med=35
    printf("\n%f",sqrt(standardDeviation(standardDeviationSum(arr,10,ort(arr,10)),10)));
    return 0;
}
float StandardDeviation(float sd,int n)
{
    return (float)sd/n;
}
float standardDeviationSum(int arr[], int indis, float ort)
{
    if(indis==-1) return 0;
    return pow((arr[indis]-ort),2)+standardDeviationSum(arr,indis-1,ort);
}
float ort(int arr[], int indis)
{
    int i, ort=0;
    for(i=0;i<indis;i++) ort+=arr[i];
        return (float)ort/indis;
}