/* ortancca isimden uzun olan isimleri yazdıran fonksiyonu yazınız lütfen */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct person
{
    char name[20];
    struct person *next;
};
typedef struct person prs;
prs *head, *q, *dlt, *new;
void add_node(char[]);
void delete_node(char[]);
void search(char[]);
void show_list(void);
int  numberOf_list(void);
prs* median(void);
void long_names(void);
int main()
{
    head=(prs*)malloc(sizeof(prs));
    char s[20];
    int process;
    do
    {
        printf("\nadd person 1\nshow list 2\ndelete person 3\nshow the median name 4\nshow longer names then median name 5\nexit 6 ");
        scanf("%d",&process);
        switch(process)
        {
            case 1:
                printf("\nplease enter the person name ");
                scanf("%s",s);
                add_node(s);
                break;
            case 2:
                show_list();
                break;
            case 3:
                printf("\nplease enter the name you want to delete ");
                scanf("%s",s);
                delete_node(s);
                break;
            case 4:
                q=median();
                printf("\nmedian name %s",q->name);
                break;
            case 5:
                long_names();
                break;
        }
    } while (process!=6);
    return 0;    
}
void add_node(char s[])
{
    new=(prs*)malloc(sizeof(prs));
    search(s);
    strcpy(new->name,s);
    new->next=q->next;
    q->next=new;
}
void search(char s[])
{
    prs *p;
    p=q=head;
    while(q->next!=NULL)
    {
        if(strcmp(p->name,s)>=0) break;
        q=p;
        p=p->next;
    }
}
void delete_node(char s[])
{
    search(s);
    dlt=q->next;
    q->next=q->next->next;
    free(dlt);
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
int numberOf_list(void)
{
    int counter=0,m;
    q=head;
    while(q!=NULL)
    {
        counter++;
        q=q->next;
    }
    counter--;
    return counter;
}
prs* median(void)
{
    int m, i;
    m=numberOf_list();
    if(m%2!=0) m=m/2+1;
    else m=m/2;
    q=head;
    for(i=0;i<m;i++)
        q=q->next;
    return q;
}
void long_names(void)
{
    prs *p;
    q=head;
    p=median();
    while(q!=NULL)
    {
        if(strlen(p->name)<strlen(q->name))
            printf("\n%s",q->name);
        q=q->next;
    }
}