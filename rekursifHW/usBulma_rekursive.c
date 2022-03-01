/* rekürsif fonksiyon ile üs hesaplama */
#include <stdio.h>

int us(int, int);
int main()
{
    int ust, taban;
    printf("sırasıyla taban ve ust degerini giriniz lutfen");
    scanf("%d",&taban);
    scanf("%d",&ust);
    printf("%d",us(taban, ust));
    return 0;
}
int us(int x, int y)
{
    if(y==1)
        return x;
    return x*us(x,y-1);
}