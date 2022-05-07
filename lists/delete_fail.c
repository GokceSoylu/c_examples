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
    printf("\nöğrenci listesini giriniz\ndurdurmak icin -1 giriniz\n");
    add_node();    

}
void add_node()
