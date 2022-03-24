/* dizi ogrenci numaranızdır buna gore çıktıyı bulunuz */
#include <stdio.h>
int main()
{
    int a[10]={2,0,1,0,2,1,3,0,0,1},*m,**k;
    m=a;
    printf("\n adresler\n&a = %d\n&m = %d",&a,&m);
    printf("\noutput1 : %d",*(m+2));//1√
    *(m+3)+=4;
    m +=5;
    printf("\noutput2 : %d",(m+2));//&a+28√
    m=&a[4];
    k=&m;
    printf("\noutput3 : %d",*(*(k)-1));//4 vayy m[3]=4 yaptık yukarda
    printf("\noutput4 : %d",*k);//&a+16√
    m=m-2;
    printf("\noutput5 : %d",*k);//&a+8√
    return 0;
}//bu sınavda nasıl çözulur :( yandık