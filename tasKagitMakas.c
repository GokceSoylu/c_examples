/* taş kağıt makas oyunu */
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int n;
    char oyuncu, pc[]={"tkm"};
    srand(time(NULL));
    n=rand()%4;
    printf("tas(t) kagit(k) makas(m)?\nbol sans :))");
    scanf("%c",&oyuncu);
    printf("%c - %c\n",oyuncu,pc[n]);
    if(n==0)//tas
    {
        if(oyuncu=='t')
            printf("ooo berabere\nhadi bidaha");
        else if(oyuncu=='k')
            printf("kazandinn");
        else if(oyuncu=='m')
            printf("kaybettin\ntekrar mi denesen\nyenilen guresci... ;)");
        else
            printf("tas(t), kagıt(k) yada makaas(m) yazmalısın dostum");
    }
    else if(n==1)//kagıt
    {
        if(oyuncu=='t')
            printf("kaybettin\nsans benden yana:)");
        else if(oyuncu=='k')
            printf("ooo berabere\naklimi okuyor olmalısın :)");
        else if(oyuncu=='m')
            printf("kazandınn\nsanslisin dostum");
        else 
            printf("tas(t), kagıt(k) yada makaas(m) yazmalısın dostum");
    }
    else//makas
    {
        if(oyuncu=='t')
            printf("kazandınn\nbu isi biliyorsun:))");
        else if(oyuncu=='k')
            printf("kaybettin\nolmuyor, olmuyoor ;)");
        else if(oyuncu=='m')
            printf("ooo berabere\nboyle olmaz, bidaha;)");
        else
            printf("tas(t), kagıt(k) yada makaas(m) yazmalısın dostum");
    }
    return 0;
}