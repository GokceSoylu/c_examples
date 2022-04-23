/*lab 9 sorusunun liste ile çözümü */
#include <stdio.h>
#include <stdlib.h>
struct student 
{
    char name[20],surname[20];
    int mid,final,std_num;
    struct student *next;
};
typedef struct student std;
std *head,*p;
std* new_record(std*);
void show_list(void);
void update_list(void);
std* delete(void);
void best_student(void);
void average(void);
int main()
{
    int process;
    while(1)
    {
        int flag=0;
        printf("\nplease press for\nnew record 1,\nshow list 2,\nupdate list 3,\ndelete sth from list 4,\nprint best student 5,\nprint avarege of the class 6,\nexit 7 ");
        scanf("%d",&process);
        switch(process)
        {
            case 1:
            {
                p=new_record(p);
                break;
            }
            case 2:
            {
                show_list();
                break;
            } 
            case 3:
            {
                update_list();
                break;
            }
            case 4:
            {
                head=delete();
                break;
            }
            case 5:
            {
                best_student();
                break;
            }
            case 6:
            {
                average();
                break;
            } 
            case 7:
                flag=1;
        }
        if(flag==1) break;
    }
    return 0;
}
std* new_record(std* p)
{   
    static int i=0;
    if(i==0)
    {
        head=(std*)malloc(sizeof(std));
        p=head;
    }
    else
    {
        p->next=(std*)malloc(sizeof(std));
        p=p->next;
    }
    printf("\nname ");
    scanf("%s",p->name);
    printf("\nsurname ");
    scanf("%s",p->surname);
    printf("\nstudent number ");
    scanf("%d",&p->std_num);
    printf("midtrem exam grade ");
    scanf("%d",&p->mid);
    printf("\nfianl exam grade ");
    scanf("%d",&p->final);
    p->next=NULL;
    i++;
    return p;
}
void show_list(void)
{
    std *p=head;
    while(p!=NULL)
    {
        printf("\n%s %s %d %d",p->name,p->surname,p->mid,p->final);
        p=p->next;
    }
}   
void update_list(void)
{
    std *p=head;
    int process,num;
    printf("please enter the the student's number you want to update ");
    scanf("%d",&num);
    while(p->std_num!=num) p=p->next;
    printf("which information do you want to change\n1 name\n2 surname\n3 student number\n4 midterm exam grade\n5 final exam grade ");
    scanf("%d",&process);
    switch (process)
    {
        case 1:
        {
            printf("\nplease enter the new name ");
            scanf("%s",p->name);
            break;
        }
        case 2:
        {
            printf("\nplease enter the new surname ");
            scanf("%s",p->surname);
            break;
        }
        case 3:
        {
            printf("\nplease enter the student's new number ");
            scanf("%d",&p->std_num);
            break;
        }
        case 4:
        {
            printf("\nplease enter the new midterm result ");
            scanf("%d",&p->mid);
            break;
        } 
        case 5:
        {
            printf("\nplease enter the new final result ");
            scanf("%d",&p->final);
            break;
        }
    }
}
std* delete(void)
{
    int num;
    std *p=head,*q=p;
    printf("\nplease enter the student number you wannt to delete ");
    scanf("%d",&num);
    while(p->std_num!=num)
    {
        q=p; 
        p=p->next;
    }
    if(p==head)
        head=p->next;
    else if(p->next!=NULL)
        q->next=p->next;
    else
        q->next=NULL;
    return head;
}
void best_student(void)
{
    std *p=head,*best;
    float max=0,ort;
    while(p!=NULL)
    {
        ort=(float)p->final*0.6+p->mid*0.4;
        if(max<ort)
        {
            max=ort;
            best=p;
        }
        p=p->next;
    }
    printf("\n%s %s the average: %f",best->name,best->surname,max);
}
void average(void)
{
    float ort=0;
    std *p=head;
    int i=0;
    while(p!=NULL)
    {
        ort+=(float)p->mid*0.4+p->final*0.6;
        p=p->next;
        i++;
    }
    printf("\nthe class average is %f",ort/i);
}