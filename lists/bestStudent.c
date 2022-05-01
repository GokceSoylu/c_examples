/* ortalaması en yüksek öğrenciyi bulur */
#include <stdio.h>//liste giriş sırasına göre olacaktır
#include <string.h>
#include <stdlib.h>
struct student
{
    char name[20];
    int mid,final;
    struct student *next;
};
typedef struct student std;
float avarege(std*);
void best_student(void);
void new_node(void);
void delete_node(void);
void show_list(void);
void search(char[]);
std *head,*q,*p;
int main()
{
    head=(std*)malloc(sizeof(std));
    p=head;
    int process;
    do
    {
        printf("\nnew record 1\ndelete 2\nshow list 3\nbest student 4\nexit 5  ");
        scanf("%d",&process);
        switch(process)
        {
            case 1:
                new_node();
                break;
            case 2:
                delete_node();
                break;
            case 3:
                show_list();
                break;
            case 4:
                best_student();
                break;
        }
    }
    while(process!=5);
    return 0;
}
void new_node(void)
{
    p->next=(std*)malloc(sizeof(std));
    p=p->next;
    printf("name ");
    scanf("%s",p->name);
    printf("midterm result ");
    scanf("%d",&p->mid);
    printf("final ");
    scanf("%d",&p->final);//new->next=NULL; demedim zaten boş bıraktığımda NULL atıyor
}
void delete_node(void)
{
    char name_dlt[20];
    printf("please enter the name you want to delete  ");
    scanf("%s",name_dlt);
    search(name_dlt);
    q->next=q->next->next;
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
void search(char s[])
{
    std *p;
    p=q=head;
    while(strcmp(p->name,s)!=0)
    {
        q=p;
        p=p->next;
    }
}
float avarege(std *p)
{
    return ((float)p->mid*0.4+p->final*0.6);
}
void best_student(void)
{
    q=head;
    std *max_std=head;
    float max=avarege(head);
    while(q!=NULL)
    {
        if(max<avarege(q))
        {
            max=avarege(q);
            max_std=q;
        } 
        q=q->next;
    }
    printf("\n best student: %s the avarege %f",max_std->name,max);
}