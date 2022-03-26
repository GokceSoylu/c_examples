/* iki boyutlu diziyi pontera atama ve yazdırma 2.yontem */
#include <stdio.h>
int main()
{
    int ar[3][4]={1,2,3,4,5,6,7,8,9,0,1,2},i,j,*p=&ar[0][0];
    for(i=0;i<3;i++)
        for(j=0;j<4;j++)
            printf("%d ",*(p+i*4+j));
    return 0;
}//burada iki boyutlu bir dizinim adresini pointera atadik ve adresi kullanarak yzdirdik ama pointer hala diziye bagımlı.
//merak ettiğim ikik boyutlu dizi yapısında bir pointerı nasıl dinamik dizi yontemi ile olusturabilirim? hala bilmiyorum :(