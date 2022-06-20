/* listeyi  oluşturunuz daha sonra bu listede aynı isimli kisileri siliniz. (bir isimden bir tane bulunmalı)*/

#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[20];
    struct student *next;
};
typedef struct student std;
int strcmp_my(char*, char*);
void print_file(std*);
int main()
{
    std *p, *head, *q, *pp, *dlt;
    int a=1;
    head=(std*)malloc(sizeof(std));
    p=head;
    while(a==1)
    {
        p->next=(std*)malloc(sizeof(std));
        p=p->next;
        printf("\n?  ");
        scanf("%s",p->name);
        printf("\ndevam etmek icin 1 giriniz  ");
        scanf("%d",&a);
    }
    p->next=NULL;
    head=head->next;
    print_file(head);
    pp=head;
    q=head;
    while(pp!=NULL)
    {
        p=pp->next;
        while(p!=NULL)
        {
            if((strcmp_my(p->name,pp->name))==0)
            {
                dlt=p;
                p=p->next;
                q->next=q->next->next;
                free(dlt);
            }
            else
            {
                q=p;
                p=p->next;
            }
        }
        pp=pp->next;
        q=pp;
    }
    printf("\nliste sadelestirildi\n");
    print_file(head);
    return 0;
}
int strcmp_my(char *x, char *y)
{
    while(*x)
    {
        if(*x==*y)
        {
            x++;
            y++;
        }
        else
            return (*x-*y);
    }
    return (*x-*y);
}
void print_file(std *head)
{
    std *p=head;
    while(p!=NULL)
    {
        printf("\n%s ",p->name);
        p=p->next;
    }
}