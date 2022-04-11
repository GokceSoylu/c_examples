/* kullanıcı tarafından girilen kelimede yine kullacının girdigi harfi arayan c programı */
#include <stdio.h>
int main()
{
    int i,flag=0;
    char array[20],a;
    gets(array);
    printf("aramak istedginiz hari giriniz ");
    scanf("%c",&a);
    while(array[i])
    {
        if(array[i]==a)
        {
            flag=1;
            break;
        }
        i++;
    }
    if(flag==1)
        printf("girilen kelimede %c bulunmaktadır",a);
    else
        printf("girilen kelimed %c bulunmamaktadır",a);
    return 0;
}
