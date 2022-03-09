/* rekursif fonksiyo ile ekok hesabı */
#include <stdio.h>
int ebob(int,int);
int main()
{
    int n,m;
    printf("\nokek ini ogrenmek istedigininiz sayilari giriniz lutfen ");
    scanf("%d%d",&m,&n);
    if(ebob(m,n)!=1)
        printf("okek = %d",ebob(n,m)*m);
    else
        printf("okek = %d",m*n);
    return 0;
}
int ebob(int x, int y)
{
    if(y==0)
        return x;
    else
        return ebob(y,x%y); 
}
