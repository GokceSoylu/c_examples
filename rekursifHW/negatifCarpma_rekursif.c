/* toplama işlemi ile negatif carpma yapan rekürsif fonksiyon */
#include <stdio.h>

int carpma(int, int);
int main()
{
    int n, n2;
    printf("carmak istediginiz sayıları(bir adet negatif bir adet pozitif olacak sekilde) giriinz lutfen");
    scanf("%d",&n);
    scanf("%d",&n2);
    printf("%d x %d = %d",n,n2,carpma(n, n2));
    return 0;
}
int carpma (int x, int y)
{
    if(x>0)
        return y+carpma(x-1,y);
    if(y>0)
        return x+carpma(x,y-1);
    return 0;
}