/* ortalaması en yüksek ikinci öğrenciyi bulan fonksiyonu yazınız */
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
std *head, *p, *q, *dlt;
void new_node(void);
void delete_node(char[]);
void show_list(void);
void search(char[]);
float avarege(std*);
void best_second(void);
int main()
{
    head=(std*)malloc(sizeof(std));
    p=head;
    int process;
    char names[20];
    do
    {
        printf("\nnew node 1\nshow list 2\ndelete node 3\nbest second student 4\nexit 5");
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
                best_second();
                break;
        }
    } while (process!=5);
    
}
void new_node()
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
        printf("\n%s %d %d",q->name,q->mid,q->final);
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
    while(strcmp(p->name,names)!=0) 
    {
        q=p; 
        p=p->next;
    }
}
float avarege(std *p)
{
    return ((float)p->mid*0.4+p->final*0.6);
}
void best_second(void)
{
    float max=0,maxS=0;
    std *max_n, *maxS_n;
    q=max_n=maxS_n=head;
    while(q!=NULL)
    {
        if(max<avarege(q))
        {
            maxS=max;
            maxS_n=max_n;
            max=avarege(q);
            max_n=q;
        }
        q=q->next;
    }
    printf("\nbest second student: %s the avarege %f",maxS_n->name,maxS);
}