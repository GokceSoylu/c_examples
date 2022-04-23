/* harmonik sayıs dizisinin kullanıcının istediği kadar elemanını hesaplayıp yazdıra rekürsif fonksiyonu yazınınz ve diziniz elemanlarının listeye atayıp yazdırınız */
#include <stdio.h>//dizinin n. elemaını 1/(a+(n-1)*d) a=1 ve d=1 alınız çok saçma değil mi? bencede 
#include <stdlib.h>//yani n. eleman = 1 + 1/2 + 1/3 + . . . + 1/n 
struct harmonik
{
    float n;
    struct harmonik *next;
};
typedef struct harmonik harm;
harm *head,*p;
void list(float);
float f(int);
int main()
{
    int n;
    printf("dizinin kacıncı elemanını yazdırmak istersiniz ");
    scanf("%d",&n);
    printf("\n%f",f(n));
    printf("\n");
    p=head;
    while(p!=NULL)
    {
        printf("%f ",p->n);
        p=p->next;
    }
    return 0;
}
float f(int n)
{
    int a=1,d=1;
    float eleman,sum;
    if (n==0)
        return sum;
    else
    {
        eleman=(float)1/(a+(n-1)*d);
        sum=eleman;
        list(eleman);
        return sum+f(n-1);
    }
}
void list (float eleman)
{
    static int i=0;
    if(i==0)
    {
        head=(harm*)malloc(sizeof(harm));
        p=head;
    }
    else
    {
        p->next=(harm*)malloc(sizeof(head));
        p=p->next;
    }
    p->n=eleman;
    i++;
}