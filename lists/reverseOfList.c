/* listeyi tersine çeviren fonksiyonu yazınız */
#include <stdio.h>
#include <stdlib.h>
struct student
{
    int age;
    char name[20];
    struct student *next;
};
typedef struct student std;
void enter_info(std*);
int main()
{
    int step=1;
    std *p, *head, *a, *q;
    q=NULL;
    a=NULL;
    head=(std*)malloc(sizeof(std));
    p=head;
    while(step==1)
    {
        p->next=(std*)malloc(sizeof(std));
        p=p->next;
        enter_info(p);
        printf("\ndevam etmek icin 1 giirniz ");
        scanf("%d",&step);
    }
    p=head->next;
    while(p!=NULL)
    {
        a=p->next;
        p->next=q;
        q=p;
        p=a;
    }
    head=q;
    p=head;
    while(p!=NULL)
    {
        printf("\n%s %d",p->name, p->age);
        p=p->next;
    }   
    return 0;
}
void enter_info(std *p)
{
    printf("\nname "); scanf("%s",p->name);
    printf("yas  "); scanf("%d",&p->age);
}