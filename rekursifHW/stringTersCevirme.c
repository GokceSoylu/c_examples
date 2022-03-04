/* girilen metni ters ceviren rekursif fonksiyon */
#include <stdio.h>
#include <string.h>
void ters(char[],int,int);
int main()
{
    int n,m;
    char string[100];
    printf("metni giriniz lutfen");
    gets(string);
    n=m=strlen(string);
    ters(string,n,m);
    puts(string);
    return 0;
}
void ters (char dizi[],int x, int y)
{
    char gecici;
    int a=y/2;
    if(x>a)
        ters(dizi,x-1,y);
    gecici=dizi[x];
    dizi[x]=dizi[y-x-1];
    dizi[y-x-1]=gecici; 
}