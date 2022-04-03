/* sınavdaki output sorusu */
#include <stdio.h>
int main()
{
    int *Ap,**App,arr[]={10,5,4,10,12};
    Ap=arr;
    App=Ap;
    printf("\n&arr = %d",&arr[0]);
    printf("\n%d",Ap[2]);//4
    Ap=&arr[2];
    printf("\nbu %d",Ap);//adres + 8
    printf("%d",*(Ap+2));//12
    Ap=Ap-2;
    printf("\n%d",*Ap);//10
    printf("\n%d",Ap);//adres 
    printf("\n%d",Ap+1);//adres + 4
    return 0;

}