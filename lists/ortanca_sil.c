/* listenin ortanca elemanını silen fonkdsiyonu yazınız lütfen */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct city
{
    char name[20];
    struct city *next; 
};
typedef struct city cty;
cty *head, *p, *q, *dlt;
void add_node(char s[]);
void delete_node(char s[]);
void show_list(void);
void search(char s[]);
int numberOf_list(void);
void deleteAdd_median(void);//listenin ortanca elemanını kesip başa ekler
void delete_median(void);//listenin ortanca elemanını siler
void deleteAdd_median2(void);//listenin ortanca elemanını siler başa ve sona ekler
int main()
{
    head=(cty*)malloc(sizeof(cty));
    p=head;
    int process;
    char s[20];
    do
    {
        printf("\nadd_node 1\nshow list 2\ndelete city 3\ndelete median city and add it beginning 4\ndelete median city and add it beginning and lastd 5\nelete median city 6\nnnumber pf city 7\nexit 8  ");
        scanf("%d",&process);
        switch(process)
        {
            case 1:
                printf("\nplease type the name of city ");
                scanf("%s",s);
                add_node(s);
                break;
            case 2:
                show_list();
                break;
            case 3:
                printf("please type the name of city you want to delete ");
                scanf("%s",s);
                delete_node(s);
                break;
            case 4:
                deleteAdd_median();
                break;
            case 5:
                deleteAdd_median2();
                break;
            case 6:
                delete_median();
                break;
            case 7:
                printf("%d",numberOf_list());
                break;
        }
    } while (process!=8);
    return 0;
}
void add_node(char s[])
{
    p->next=(cty*)malloc(sizeof(cty));//head ile başlattın sonra next'e yer açıp next'e geçtin. sıralı sırasız her iki yöntemde de head'i boş bırakıyoruz.
    p=p->next;
    strcpy(p->name,s);
}
void show_list(void)
{
    q=head->next;
    while(q!=NULL)
    {
        printf("\n%s",q->name);
        q=q->next;
    }
}
void delete_node(char s[])
{
    search(s);
    dlt=q->next;
    q->next=q->next->next;
    free(dlt);
}
void search(char s[])
{
    cty *p;
    p=q=head;
    while(q->next!=NULL)
    {
        if(strcmp(p->name,s)==0) break;
        q=p;
        p=p->next;
    }
}
int numberOf_list(void)
{
    int counter=0;
    q=head;
    while(q->next!=NULL)
    {
        counter++;
        q=q->next;
    }
    return counter;
}
void delete_median(void)
{
    int i, m;
    m=numberOf_list();
    if(m%2!=0) m=m/2+1;
    else m=m/2;
    q=head;
    for(i=0;i<m;i++) q=q->next;
    delete_node(q->name);
}
void deleteAdd_median(void)
{
    int i, m;
    cty *p=(cty*)malloc(sizeof(cty));
    m=numberOf_list();
    if(m%2!=0) m=m/2+1;
    else m=m/2;
    q=head;
    for(i=0;i<m;i++) q=q->next;
    p=q;
    delete_node(q->name);
    p->next=head->next;
    head->next=p;
}
void deleteAdd_median2(void)
{
    int i, m;
    cty *p=(cty*)malloc(sizeof(cty)),*pp=(cty*)malloc(sizeof(cty));
    m=numberOf_list();
    if(m%2!=0) m=m/2+1;
    else m=m/2;
    q=head;
    for(i=0;i<m;i++) q=q->next;
    p=pp=q;
    delete_node(q->name);
    p->next=head->next;
    head->next=p;
    q=head;
    while(q->next!=NULL) q=q->next;
    q->next=pp;
    pp->next=NULL;
}