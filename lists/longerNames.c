/* ismi beş harften uzun olan personelin isimlerini yazdıran fonksiyonu yazınız lütfen */
#include <stdio.h>//listeye alfabetik sıraya göre kaydedilecektir
#include <string.h>
#include <stdlib.h>
struct personel
{
    char name[20];
    struct personel *next;
};
typedef struct personel prs;
void add_node(void);
void show_list(void);
void delete_node(void);
void search(char[]);
void long_names(void);
prs *head, *q, *dlt, *new;
int main()
{
    int process;
    head=(prs*)malloc(sizeof(prs));
    do
    {
        printf("\nadd personel 1\nshow list 2\ndelete personel 3\nnames whic longer then five latters 4\nexit 5  ");
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
                delete_node();
                break;
            case 4:
                long_names();
                break;
        }
    }while(process!=5);
    return 0;
}
void add_node()//alfabetik sırayla kaydederken önce kendine yeni bir eleman açasın sonra bu elemanın içine doldurup searchlersin. 
{//zaten buradaki muhabbet o önce elemanı oluşturup sonra ben nereye uygunum diye aratıyorsun. aratma bittikten sonrada atamanı yapıyorsun b
    new=(prs*)malloc(sizeof(prs));//bu next mext muhabbetleri aramadan sonra ortaya çıkıyor. --direkt giriş sırasına göre kaydedeceksen de 
    printf("\nplease enter he name ");//önce kendine kaldığın yerden eleman açarsın p->next=malloc olayı sonra p=p->next yaparsın yani direkt kaydedeceğin yere 
    scanf("%s",new->name);//gelirsin değerlerini girdiğinde de kayıt tamamlanmış olur. search'le falan uğraşmazsın || şu net farkı unutmayalım > sıra için yeni elamanı
    search(new->name);//kaydedip yerini ara, klasik için direkt yerini hazırlayıp kaydet, bitir :) not easy😅
    new->next=q->next;
    q->next=new;
}
void search(char s[])
{
    prs *p;
    p=q=head;
    while(q->next!=NULL)
    {
        if(strcmp(p->name,s)>=0) break;
        q=p;
        p=p->next;
    }
}
void show_list(void)
{
    q=head;
    while(q!=NULL)
    {
        printf("\n%s",q->name);
        q=q->next;
    }
}
void delete_node(void)
{
    char s[20];
    printf("\nplease enter the person's name you waant to delete  ");
    scanf("%s",s);
    search(s);
    dlt=q->next;
    q->next=q->next->next;
    free(dlt);
}
void long_names(void)
{
    q=head;
    while(q!=NULL)
    {
        if(strlen(q->name)>=5)
            printf("\n%s",q->name);
        q=q->next;
    }
}//sıfır hata tebrik ederim :)