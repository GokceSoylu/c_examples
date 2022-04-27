/* (liste sıralıdır) Sadece personelin adını tutacak liste. Soyismi baoşver :) */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct personel
{
    char name[20];
    struct personel *next;
};
typedef struct personel prs;
prs *head, *new, *q, *dlt;
void search(char s[]);
void add_node(char s[]);
prs* delete_node(char s[]);//bunlar slaytta void döndürüyor öyle de deneyelim
void show_list(void);
void longest(void);
int main()
{
    char names[20];
    int i,j,process,flag=0;
    head=(prs*)malloc(sizeof(prs));
    strcpy(head->name,"listenin basi");
    head->next=NULL;
    while(1)
    {    
        printf("\nyeni personel eklemek icin 1\nsilmek icin 2\npersonel listesini gormek icin 3\nen uzun isimli personeli ogrenmek icin(onemli bir bilgi cünkü:)) 4\ncıkmak icin 5'e basınız ");
        scanf("%d",&process);
        switch(process)
        {
            case 1:
                printf("\neklemek istediginiz isim ");
                scanf("%s",names);
                add_node(names);
                break;
            case 2:
                printf("\nsilmek istediginiz isim ");
                scanf("%s",names);
                head=delete_node(names);
                break;
            case 3:
                show_list();
                break;
            case 4:
                longest();
                break;
            case 5:
                flag=1;
                break;
            default:
                printf("\nyanlis giris yaptınız ");
        }
        if(flag==1) break;
    }
    return 0;
}
void search(char s[])
{
    prs *p;
    p=q=head;
    while(p->next!=NULL)
    {
        p=p->next;
        if(strcmp(p->name,s)>=0) break;
        q=p;
    }
}
void add_node(char s[])
{
    new=(prs*)malloc(sizeof(prs));
    strcpy(new->name,s);
    search(new->name);
    new->next=q->next;
    q->next=new;
}
prs* delete_node(char s[])
{
    prs *p;
    search(s);
    p=q->next;
    if(q==head)//başı silme
    {
        head=head->next;
        free(q);
    }
    else if(p->next==NULL)//sonu silme
    {
        q->next=NULL;
        free(p);
    }
    else
    {
        q->next=q->next->next;//ortadan silme
        free(p);
    }
    return head;
}
void show_list(void)
{
    prs *p=head;
    while(p!=NULL)
    {    
        printf("\n%s",p->name);
        p=p->next;
    }
}
void longest(void)
{
    prs *p, *l;
    p=l=head;
    while(p!=NULL)
    {
        if(strlen(l->name)<strlen(p->name))
            l=p;
        p=p->next;// :) akıllılık yapıp bunu if'ten koyayım dersen segmentation fault'u yersin
    }
    printf("\n%s %lu",l->name,strlen(l->name));
}