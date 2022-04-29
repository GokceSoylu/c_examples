/* strtok deneem */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct d
{
    char name[20];
    struct d *next;
};
struct d *head;
int main()
{
    head=(struct d*)malloc(sizeof(struct d));
    if(head->next==NULL) printf("yeah");
    /*char a[]="bu gun gunlerden pazartesi :)";
    char *p;
    int i,k=0;
    p=strtok(a," ");
    printf("\n%s",p);
    while(p!=NULL)
    {
        p=strtok(NULL," ");
        printf("\n%s",p);
    }   
    */return 0;
}