/* farkli tiplerdeki pointerların bellekte kapladıkları yer */
#include <stdio.h>
int main()
{
    int n=10,*np=&n,a[2]={1,2},*ap=a;
    char m='a',*mp=&m,b[3]="asd";
    double k=12.234,*kp=&k;
    printf("size of integer = %lu\nsize of integer pointer = %lu\n",sizeof(n),sizeof(np));//4 8
    printf("\nsize of char = %lu\nsize of char pointer = %lu\n",sizeof(m),sizeof(mp));//1 8
    printf("\nsize of double = %lu\nsize of double pointer = %lu\n",sizeof(k),sizeof(kp));//8 8
    printf("\nsize of one element of an integer array = %lu",sizeof(a[2]));//4
    printf("\nsize of array pointer = %lu",sizeof(ap));//8
    printf("\nsize of one element of char array = %lu",sizeof(b[3]));//1
    return 0;
}//buradan anladığımız kadarıyla tipi ne olursa olsun pointer 8 byte yer kaplar
//int 4, double 8, char 1, dizi ise tipine göre.