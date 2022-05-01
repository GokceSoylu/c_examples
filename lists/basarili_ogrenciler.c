/* ortalamsı ortalamadan yüksek ola öğrencileri yazdıran fonksiyonu yazınız. Liste alfetik sırada olmalıdır */
#include <stdio.h>
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
void delete_node(void);
void search(char[]);
void show_list(void);
float avarege(std*);
void success_std(void);
int main()
{
    int process;
    head=(std*)malloc(sizeof(std));
    p=head;
    do
    {
        printf("\nnew student 1\nshow list 2\ndelete student 3\nsuccesfull students 4\nexit 5  ");
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
                delete_node();
                break;
            case 4:
                success_std();
                break;
        }
    } while (process!=5);
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
void delete_node(void)
{
    char names[20];
    printf("\nplease enter the name you want to delete ");
    scanf("%s",names);
    search(names);
    dlt=q->next;
    q->next=q->next->next;
    free(dlt);
}
void search(char names[])
{
    std *p;
    q=p=head;
    while(strcmp(q->name,names)!=0)
    {
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
    std *p=head;
    float sum=0,avr;
    int counter=0;
    while(p!=NULL)
    {
        sum+=avarege(p);
        p=p->next;
        counter++;
    }
    counter--;
    avr=(float)sum/counter;
    printf("\navarege of the class %f",avr);
    p=head;
    while(p!=NULL)
    {
        if(avr<=avarege(p))
            printf("\n%s %f",p->name,avarege(p));
        p=p->next;
    }
}