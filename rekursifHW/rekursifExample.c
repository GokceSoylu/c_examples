/* basit rekürsif fonksiyon ornegi */
#include <stdio.h>
//iki fonksiyon arassındaki farka ve çıktılarına dikkat edelim!
void fonksiyon_2 (int);
void fonksiyon(int);
int main()
{
    int n=10;
    fonksiyon(n);
    printf("\n");
    fonksiyon_2(n);
    return 0;
}
void fonksiyon (int x)
{
    if(x>1)
        fonksiyon(x-1);
    printf("%d",x);
}
void fonksiyon_2 (int y)
{
    printf("%d",y);
    if(y>1)
        fonksiyon_2(y-1);
}