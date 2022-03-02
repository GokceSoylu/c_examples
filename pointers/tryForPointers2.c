/* pointers öğrenmek adına denemeler 
dikkat! yüksek oranda hayal içerir --> pointerslari işaret parmaklarının ucunda yıldız olan  insanlar(işarteçiler)dir bu işaretcileri * ile çagirirsan
bu yenetenekleri aktifleşir ve o parmaklarının ucundaki yıldzı sayesinde bildikleri adresteki kisinin içini gösterirler*/
#include <stdio.h>
int main()
{
    int *m,**n,***p;
    int a=8;
    m=&a;//burada m e a nın adresini öğrettik *m yaptığımızda a nın içinği gösterir ;))
    n=&m;
    p=&n;
    printf("\na= %d  *m= %d  **n= %d  ****p= %d\n",a,*m,**n,***p);
    printf("\n&a= %d  m= %d  *n= %d  ***p= %d\n",&a,m,*n,**p);
    printf("\n&m= %d  n= %d  **p= %d\n",&m,n,*p);
    printf("\n&n= %d  *p= %d\n",&n,p);
    return 0;
}/*mesela a için degisiklik yapmak istersende m in basina * koyarak yapabililrsin çünkü basına yıldız koydugunda m yıldıız sayesinde a nın içine iiişk 
tutar ve sende istediğin degisikliği yapabilirsin --> *m+=7; dersek a=15 olur :)*/