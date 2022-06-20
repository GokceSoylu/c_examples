#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct name
{
    char name[20];
    struct name *next;
};
typedef struct name name;
void delete(name *);
void print(name *);
int main()
{
    int i=1;
    name *p, *head, *pp, *q;
    head=(name*)malloc(sizeof(name));
    p=head;
    while(i==1)
    {    
        printf("\nismi giriniz");
        p->next=(name*)malloc(sizeof(name));
        p=p->next;
        scanf("%s",p->name);
        printf("\ndevam etmek icin 1 giriniz  ");
        scanf("%d",&i);
    }
    p->next=NULL;
    head=head->next;
    print(head);
    p=head;
    while(p!=NULL)
    {
        q=p;
        pp=p->next;
        while(pp!=NULL)
        {
            if((strcmp(p->name,pp->name))==0)
            {
                pp=pp->next;
                delete(q);
            }    
            else
            {
                q=pp;
                pp=pp->next;
            }
        }
        p=p->next;
    }
    printf("\nliste sadelestirildi\n");
    print(head);
    return 0;
}
void delete(name *q)
{
    name *dlt;
    dlt=q->next;
    q->next=q->next->next;
    free(dlt);
} 
void print(name *head)
{
    name *p;
    p=head;
    while(p!=NULL)
    {    
        printf("\n%s",p->name);
        p=p->next;
    }
}