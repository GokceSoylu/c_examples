#include <stdio.h>//HATAA VAR!!!
#include <stdlib.h>
int main()
{
    struct list 
    {
        int age;
        char name[20];
        struct list *next;
    };
    typedef struct list list;
    list *p,*head,*new;
    int i,n;
    printf("how many students are there in the list ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            head=(list*)malloc(sizeof(list));
            p=head;
        } 
        else
        {
            p->next=(list*)malloc(sizeof(list));
            p=p->next;
        }
        printf("\nname ");
        scanf("%s",p->name);
        printf("\nage ");
        scanf("%d",&p->age);
    }
    p->next=NULL;//listeyi oluşturduk
    printf("\nthe student's information will be add the begining of the list");
    new=(list*)malloc(sizeof(list));
    new->next=head;
    head=new;
    printf("\nname ");
    scanf("%s",new->name);
    printf("\nage ");
    scanf("%d",&new->age);
    p=head;
    while(p!=NULL)
    {
        printf("\n\nname %s\nage %d",p->name,p->age);
        p=p->next;//bunu unutuyorsun. yazdırırken daha dikkatli olalım
    }
    return 0;
}