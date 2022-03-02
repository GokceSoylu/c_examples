/* degerleri normal cagiricaz ve pointersla cagiricaz --> beynin yanma noktasi*/
#include <stdio.h>
#include <stdlib.h>
int deger_ver (int);//call by value
int dizi_ver (int[]);
int pointer_ver (int*);//call by referance
int main()
{
    int a,i;//hadi elimiz deymişken dinamik dizi yapalim
    printf("\ndininz boyutunu giirniz lutfen ");
    scanf("%d",&a);
    int *p=(int*)malloc(sizeof(int)*a);
    printf("\n dizinin elemanlarını giriniz lutfen");
    for(i=0;i<a;i++)
    {
        printf("\n%d.eleman ",i+1);
        scanf("%d",&*(p+i));
    }
    printf("\ndizimiz: \n");
    for(i=0;i<a;i++)
        printf(" %d ",p[i]);
    printf("\nsadece paremetre olarak gönderdigimiz fonk: %d",deger_ver(p[0]));
    printf("\np[0] = %d",p[0]);
    printf("\ndiznin hepsinin verdigimiz fonk: %d",dizi_ver(p));
    printf("\np[0] = %d",p[0]);
    printf("\npointer olark verilen fonk: %d",pointer_ver(p));
    printf("\np[0] = %d",p[0]);
    return 0;
} 
int deger_ver (int x)
{
    x*=2;
    return x;
}
int dizi_ver(int array[])
{
    array[0]*=2;
    return array[0];
}
int pointer_ver(int *n)
{
    *n*=2;
    return *n;
}/*ez cümle fonksiyona paremetre gönderdiğimizde onu sadece kopyalar, köklü degisiklik yapma hakkıı yoktur. Pointer ile gonderildiginde ise
   aderesle gönderdiğimiz için degiskenin kendisini degistirir(hayat kurtaran özellik değil mi). basta her dizi pointer her pointer dizidir
   demiştik işte tamda bu sayede fonksiyona paremetre olarak dizinin kendisini verdiğimizde yine degisiklik yapablir çünkü dizide pointerdir*/