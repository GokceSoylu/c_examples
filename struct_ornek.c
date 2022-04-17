#include <stdio.h>

struct lectures
{
    int mid;
    int final;
};
typedef struct lectures lec;
struct info 
{
    int std_num;
    char name[20];
    char surname[20];
    lec class[5];
};
typedef struct info inf;
int main()
{
    inf info;//😅
    int i;
    float sum=0;
    printf("ogrencinin adı ");
    gets(info.name);
    printf("\nsoyadı ");
    gets(info.surname);
    printf("\nogr no ");
    scanf("%d",&info.std_num);
    printf("\nnotlarını giriniz lutfen ");
    for(i=0;i<5;i++)
    {
        printf("\n%d.ders",i+1);
        scanf("%d",&info.class[i].mid);
        scanf("%d",&info.class[i].final);
    }
    for(i=0;i<5;i++)
        sum+=(float)info.class[i].mid*(0.4)+info.class[i].final*(0.6);//yılan hikayesine döndü 😂
    printf("ogrencinin ortalaması %f ",sum/5);
    return 0;
}