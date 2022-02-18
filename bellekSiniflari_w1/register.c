/* bana sorarsan registerin pek bi esprisi yok. Tıpkı auto gibi sadece tanimli oldigi blok içersinizde gecerlidir. daha hızlı hizli olması 
amaciyla kullanılır */
#include <stdio.h>
int main()
{
    int sum=0;
    {
        register int i;
        for(i=0;i<101;i++)
        {
            sum+=i;
        }
    }
    printf("1 denn 100 e kadar olan sayıların toplamı: %d",sum);
    return 0;
}