/* kullanıcadan alınan kelimede yine kullanıcıdan alınan harften kac adet oldugunu bulunuz */
#include <stdio.h>
int main()
{
    int i,counter=0;
    char array[20],a;
    gets(array);
    printf("aramak istediginiz harfi giriniz lutfen ");
    scanf("%c",&a);
    while(array[i])
    {
        if(array[i]==a)
            counter++;
        i++;
    }
    printf("aranan harf kelimede %d kez gecmektedir",counter);
    return 0;
}