/* ortalaması ortalmadan düşük olan öğrencileri listenen silen fonksiyon 16.00*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    char name[20],surnume[20];
    int mid, final;
};
typedef struct student std; 
std *head, *p, *q;
void add_node(void);
int numberOf_std(void);
float avarege(std*);
int main()
{
    head=(std*)malooc(sizeof(std));//keşkem iyi ki'm işte bu yüzden her şeyim. //amma abattım :)
    do
    {
        printf("\nyeni ogrenci eklemek icin 1\nlistdeki ogrenci sayısını ögrenmek icin 2\nortalamayı ogrenmek icin 3\ncıkmak icin 4\n");
        scanf("%d",&)

    } while (p!=4);
    
    
    add_node();    

}
void add_node()
{
    int
    printf("durdurmak için -1 giriniz");
    p->next=(std*)malloc(sizeof(std));
    p=p->next;
    printf("\nname surname  ");
    scanf("%s%s"p->name,p->surname);
    printf("midterm final  ");
    scanf("%d%d",&p->mid,&p->final);
}
