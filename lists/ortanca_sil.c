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
cty* find_last(cty *head);
int main()
{
    head=(cty*)malloc(sizeof(cty));
    p=head;
    int process;
    char s[20];
    do
    {
        printf("\nadd_node 1\nshow list 2\ndelete city 3\ndelete median city and add it beginning 4\nelete median city 5\nnnumber pf city 6\nexit 7  ");
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
                delete_median();
                break;
            case 6:
                printf("%d",numberOf_list());
                break;
        }
    } while (process!=7);
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
cty* find_last(cty *head)
{
    cty *p=head;
    while(p->next!=NULL) p=p->next;
    return p;
}