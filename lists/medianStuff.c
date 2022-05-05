/* ortanca ile ilgli fonksiyonlar */
#include <stdio.h>//liste kullanıcının giriş sırasına göre kaydedilecektir
#include <stdlib.h>
#include <string.h>
struct student 
{
    int mid, final;
    char name[20];
};
typedef struct student std;
std *head, *p, *q, *dlt;
void add_node(void);
void delete_node(char[]);
void show_list(void);
int numberOf_list(void);
std* median(void);
float median(void);
void median_head(void);//ortancayı kesip başa ekleyen fonksiyon
void median_headFnish(void);//ortancayı kesip hem başa hem sona ekleyen fonksiyon
void delete_fail(void);//ortalaması ortalamadan düşük olan öğrencileri listede silen fonksiyon
int main()
{
    head=(std*)malloc(sizeof(prs));
    p=head;
    int process;
    char s[20];
    do
    {
        printf("\nadd new student 1\nshow list 2\ndelete student 3\nmake median first 4\nmake median firs and last 5\ndelete fail student 6\nexit 7  ");
        scanf("%d",&process);
        switch(process)
        {
            case 1:
                add_node();
                break;
            case 2:
                show_list();
                break;
            case 3:
                printf("\nplease enter the student's name you want to delete ");
                scanf("%s",s);
                delete_student(s);
                break;
            case 4:
                median_head();
                break;
            case 5:
                median_headFnish();
                break;
            case 6:
                delete_fail();
                break;
        }
    } while (process!=7);
    return 0;
}
void add_node(void)
{
    p->next=(std*)malloc(sizeof(std));
    p=p->next;
    printf("\nname ");
    scanf("%s",p->name);
    printf("\nmidterm and final results ");
    scanf("%d%d",&p->mid,&p->final);
}
void show_list(void)
{
    q=head;
    while(q!=NULL)
    {
        printf("\n%s %d %s");
    }
}


