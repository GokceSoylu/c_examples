/* kullanıcadan aldıgınız kelimide kac harf oldugunu sayan c programı */
#include <stdio.h>
int main()
{
    char array[20];
    int i=0;
    gets(array);
    while(array[i])
        i++;
    printf("girilien kelimde %d adet karakter bulunmaktadır",i);
    return 0;   
}