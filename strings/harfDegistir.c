/*kullanıcıdan alınan bir metinde kallanıcının sectigi bir harfi yine kullanıcının istedigi baska b,r harf olarak degistirme*/
#include <stdio.h>
#include <string.h>
int main()
{
    char array[50],a[2],a2[2];
    int i;
    printf("\nmetni giriniz lutfen ");
    gets(array);
    printf("\ndegistirmek istdeginiz harf ");
    gets(a);
    printf("\nyeni harf ");
    gets(a2);
    for(i=0;array[i];i++)
        if(array[i]==a[0])
            array[i]=a2[0];
    printf("\n%s",array);
    return 0;
}