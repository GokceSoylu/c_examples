/* 1 den  kadar olan sayıların toplamını bulan rekkursif fonksiyon */
#include <stdio.h>
int f(int);
int main()
{
    int n;
    printf("bu program birden N'e kadar olan sayıalrın toplamını bulmaktadır\nN sayısını giriniz lutfen ");
    scanf("%d",&n);
    printf("toplam = %d",f(n));
    return 0;
}
int f(int x)
{
    if(x==0)
        return x;
    else
        return (x+f(x-1));
}//bu kısmı biraz kafamızda oturtalım. fonksiyon ile birsyi topluyoruz yani fonksiyonun bir sonucu olamalı. bunu saglayabilmek içinde return
//kullanmalıyız ama return kullanırsak fon cagirildigi yere gider ve fonk biter mi? aslında burada return dondururken fonksiyonu tekrar 
//calısturdugumuz için boyle olmaz.