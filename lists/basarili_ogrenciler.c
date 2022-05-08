/* ortalamsı ortalamadan yüksek ola öğrencileri yazdıran ve ortalaması ortalamadan düşük olan öğrencileri listeden silen fonksiyonları yazınız.*/
#include <stdio.h>//kopya çekmek istersen; bu klavyeden girme sırasına göre kaydediyor, list2_fiveFunction.c alfabetik sıraya göre ;))
#include <string.h>
#include <stdlib.h>
struct student
{
    char name[20];
    int mid, final;
    struct student *next;
};
typedef struct student std;
std *head, *q, *p, *dlt;
void new_node(void);
void delete_node(char[]);
void search(char[]);
void show_list(void);
float avarege(std*);
float avaregeOf_class(void);
void success_std(void);
void delete_fails(void);
int main()
{
    int process;
    char  names[20];
    head=(std*)malloc(sizeof(std));
    p=head;
    do
    {
        printf("\nnew student 1\nshow list 2\ndelete student 3\nsuccesfull students 4\ndelete fail students 5\nexit 6  ");
        scanf("%d",&process);
        switch(process)
        {
            case 1:
                new_node();
                break;
            case 2:
                show_list();
                break;
            case 3:
                printf("\nplease enter the name you want to delete ");
                scanf("%s",names);
                delete_node(names);
                break;
            case 4:
                success_std();
                break;
            case 5:
                delete_fails();
                break;
        }
    }while (process!=6);
    return 0;
}
void new_node(void)
{
    p->next=(std*)malloc(sizeof(std));
    p=p->next;
    printf("\nname ");
    scanf("%s",p->name);
    printf("\nmidterm result and final result ");
    scanf("%d%d",&p->mid,&p->final);
}
void show_list(void)
{
    q=head->next;
    while(q!=NULL)
    {
        printf("\n%s %d %d %f",q->name,q->mid,q->final,avarege(q));
        q=q->next;
    }
}
void delete_node(char names[])
{
    
    search(names);
    dlt=q->next;
    q->next=q->next->next;
    free(dlt);
}
void search(char names[])
{
    std *p;
    q=p=head;
    while(q->next!=NULL)
    {
        if(strcmp(p->name,names)==0) break;
        q=p;
        p=p->next;
    }
}
float avarege(std *p)
{
    return ((float)p->mid*0.4+p->final*0.6);
}
void success_std(void)
{   
    std *p;
    float avr;
    avr=avaregeOf_class();
    printf("\navarege of the class %f",avr);
    p=head;
    while(p!=NULL)
    {
        if(avr<=avarege(p))
            printf("\n%s %f",p->name,avarege(p));
        p=p->next;
    }
}
float avaregeOf_class(void)
{
    std *p=head;
    float sum=0;
    int counter=0;
    while(p!=NULL)
    {
        sum+=avarege(p);
        p=p->next;
        counter++;
    }
    counter--;
    return ((float)sum/counter);
}
void delete_fails(void)
{
    std *p=head;
    float avr=avaregeOf_class();
    while(p!=NULL)
    {
        if(avr>avarege(p))
            delete_node(p->name);
        p=p->next;
    }
}