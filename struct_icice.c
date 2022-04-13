/* iç içe struct ornegi */
#include <stdio.h>
int main()//be cearfull about "&"
{
    struct person
    {
        char name[10];
        int age;
        struct
        {
            int day;
            int month;
            int year;
        }dt;
    };
    struct person a[4];
    int i;
    for(i=0;i<4;i++)
    {
        printf("\n%d.kişi isim: ",i+1);
        scanf("%s",a[i].name);
        printf("\nyas: ");
        scanf("%d",&a[i].age);
        printf("\ndogum tarihi: ");
        scanf("%d",&a[i].dt.day);
        scanf("%d",&a[i].dt.month);
        scanf("%d",&a[i].dt.year);
    }
    for(i=0;i<4;i++)
    {
        printf("\n%s %d %d/%d/%d",a[i].name,a[i].age,a[i].dt.day,a[i].dt.month,a[i].dt.year);
    }
    return 0;
}