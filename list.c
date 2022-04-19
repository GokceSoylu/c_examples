#include <stdio.h>//p *p bu kısıma biraz daha dikkat edelim
#include <stdlib.h>
int main()
{
    struct a
    {
        char name[20];
        char surname[20];
        int std_num;
        struct a *next;
    };
    typedef struct a cup;
    cup *head,*p;
    int i,n;
    printf("kac aedet ogrencinin bilgilerini gireceksiniz? ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            head=(cup*)malloc(sizeof(cup));
            p=head;
        }
        else
        {
            p->next=(cup*)malloc(sizeof(cup));
            p=p->next;
        }
        printf("\nname ");
        gets(p->name);
        printf("\nsurname ");
        gets(p->surname);
        printf("\nstudent ıd ");
        scanf("%d",&p->std_num);
    }
    p->next=NULL;
    p=head;
    while(p->next!=NULL)
    {
        printf("\n\nname %s\nsurname %s\nstudent number %d",p->name,p->surname,p->std_num);
        p=p->next;
    }
    printf("\n\nname %s\nsurname %s\nstudent number %d",p->name,p->surname,p->std_num);
    return 0;
}