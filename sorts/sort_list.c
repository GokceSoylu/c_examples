#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct number
    {
        int number;
        struct number *next;
    };
    typedef struct number num;
    num *p, *q, *head;
    int x, i, j, counter=0;
    head=(num*)malloc(sizeof(num));
    p=head;
    printf("\nlistenin elemanlarını giriniz durdurmak icin -1 giriniz");
    scanf("%d",&x);
    while(x!=-1)
    {
        p->next=(num*)malloc(sizeof(num));
        p=p->next;
        p->number=x;
        scanf("%d",&x);
    }
    p->next=NULL;
    p=head->next;
    printf("\nliste\n");
    while(p!=NULL)
    {
        printf("%d  ",p->number);
        p=p->next;
        counter++;
    }
    p=head->next;
    for(i=0;i<counter-1;i++)
    {    
        p=head->next;
        for(j=0;j<counter-1-i;j++)
        {
            if(p->next->number<p->number)
            {
                x=p->number;
                p->number=p->next->number;
                p->next->number=x;
            }
            p=p->next;
        }    
    }
    printf("\nliste siralandi\nliste\n");
    p=head->next;
    while(p!=NULL)
    {
        printf("%d  ",p->number);
        p=p->next;
    }
    return 0;
}