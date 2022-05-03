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
void delete_median(void);
int main()
{
    head=(cty*)malloc(sizeof(cty));
    p=head;
    int process;
    char s[20];
    do
    {
        printf("\nadd_node 1\nshow list 2\ndelete city 3\ndelete median city 4\nnumber pf city 5\nexit 6  ");
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
                delete_median();
                break;
            case 5:
                printf("%d",numberOf_list());
                break;
        }
    } while (process!=6);
    return 0;
}
void add_node(char s[])
{
    p->next=(cty*)malloc(sizeof(cty));//head ile başlattın sonra nexte yer açıp nexte geçtin. sıralı sırasız her şkş yöntemde de head'i boş bırakıyoruz.
    p=p->next;
    strcpy(p->name,s);
}
void show_list(void)
{
    q=head;
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
    for(i=0;i<m;i++)
        q=q->next;
    delete_node(q->name);
}