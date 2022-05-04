/* liste elemanlarının standart sapmasını hesaplayan fonksiyonu yazınız. √(∑(i-o)^2)/n-1 her bir elmanın aritmetik ortalamdan farkının karelerinin toplamının eleman sayısının bir eksiğine bölümünün karekökü😂 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct person
{
    int age;
    char name[20];
    struct person *next;
};
typedef struct person prs;
prs *head, *p, *q, *dlt;
void add_node(void);
void show_list(void);
void delete_node(char[]);
int numberOf_list(void);
float arithmetic_mean(void);
float power(float);
void standard_deviation(void);
int main()
{
    int process;
    char s[20];
    head=(prs*)malloc(sizeof(prs));
    p=head;
    do
    {
        printf("\nadd person 1\nshow list 2\ndelete person 3\nstandart deviation of age of persons 4\nartihmatic mean of age of persons 5\nexit 6  ");
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
                printf("\nplease enter the name of person you want to delete  ");
                scanf("%s",s);
                delete_node(s);
                break; 
            case 4:
                standard_deviation();
                break;
            case 5:
                printf("\n%f",arithmetic_mean());
                break;
        }
    } while (process!=6);
    return 0;    
}
void add_node(void)
{
    p->next=(prs*)malloc(sizeof(prs));
    p=p->next;
    printf("\nname ");
    scanf("%s",p->name);
    printf("age ");
    scanf("%d",&p->age);
}
void show_list(void)
{
    q=head->next;
    while(q!=NULL)
    {
        printf("\n%s %d",q->name,q->age);
        q=q->next;
    }
}
void search(char s[])
{
    prs *p;
    p=q=head;
    while(q->next!=NULL)
    {
        if(strcmp(p->name,s)==0) break;
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
int numberOf_list(void)
{
    int  counter=0;
    q=head;
    while(q->next!=NULL)
    {
        counter++;
        q=q->next;   
    }
    return counter;
}
float arithmetic_mean(void)
{
    int sum=0;
    q=head;
    while(q!=NULL)
    {
        sum+=q->age;
        q=q->next;
    }
    return ((float)sum/numberOf_list());
}
void standard_deviation(void)//rekürsifte yapılabilir
{
    float m, sum=0, x;
    x=arithmetic_mean();
    q=head->next;
    while(q!=NULL)
    {
        m=q->age-x;
        m=power(m);
        sum+=m;
        q=q->next;
    }
   printf("\n%f",(float)sum/(numberOf_list()-1));😅
}
float power(float m)
{
    return m*m;
}