/* bir otelin kayıt programını yazınız. Kayıtta oda numarası, adı, ödeme miktarı, kalınacak gün sayısı, oda tipi bigileri tutulacaktır. a=1000₺ b=700₺ c=400₺ (günlük😁)*/
#include <stdio.h>
#include <string.h>
struct hotel 
{
    int room;
    char name[20], surname[20];
    int payment, day;
    char room_tip;
};
typedef struct hotel hotel;
int menu(void);
void scanf_info(hotel*);
void delete(FILE*);
void upload(FILE *);
void write_file(FILE *);
void show_clients(FILE *);
int debt(FILE*);
int payment(FILE *);
void show_gap(FILE *);
int main()
{
    hotel client;
    FILE *pp, *p;
    int selection, x=1;
    printf("dosyayı olusturmak icin 1\nvar olan dosyayı kullanmak icin 2 giriniz lütfen.  ");
    scanf("%d",&selection);
    if(selection==1)
    {
        pp=fopen("hotel_room","w+");
        while(x==1)
        {
            scanf_info(&client);
            fseek(pp,(client.room-1)*sizeof(hotel),SEEK_SET);
            fwrite(&client,sizeof(hotel),1,pp);
            printf("devam etmek icin 1 giriniz");
            scanf("%d",&x);
        }
        fclose(pp);
    }    
    p=fopen("hotel_room","r+");
    selection=menu();
    while(selection!=9)
    {
        switch(selection)
        {
            case 1:
                show_clients(p); break;
            case 2:
                printf("oda numarasını giriniz  ");
                scanf("%d",&x);
                fseek(p,(x-1)*sizeof(hotel),SEEK_SET);
                x=payment(p);
                printf("\ntoplsm tutuar = %d",x); break;
            case 3:
                printf("oda numarasını giriniz lütfen ");
                scanf("%d",&x);
                fseek(p,(x-1)*sizeof(hotel),SEEK_SET);
                x=debt(p);
                printf("\nborc %d",x); break;
            case 4:
                show_gap(p); break;
            case 5:
                printf("\noda numarasını giriniz  ");
                scanf("%d",&x);
                fseek(p,(x-1)*sizeof(hotel),SEEK_SET);
                fread(&client,sizeof(hotel),1,p);
                printf("\n%s %s. yapılan odeme = %d. gun sayısı = %d. oda tipi = %c",client.name, client.surname, client.payment, client.day, client.room_tip); break;
            case 6:
                delete(p); break;
            case 7:
                upload(p); break;
            case 8:
                write_file(p); break;
        }
       selection=menu();
    }
    fclose(p);
    return 0;
}
int menu(void)
{
    int selection;
    printf("\n\nmusteri listesi 1\nödeme miktarı hesabı 2\nkalan borc miktarı 3\nbos odalar 4\noda numarasıyla arama 5\nmusteri silme 6\nbilgi guncelleme 7\ntext dosyaasına yazdırma 8\ncikis 9  ");
    scanf("%d",&selection);
    return selection; 
}
void delete(FILE *p)
{
    int x;
    hotel gap_room={0," "," ",0,0,' '};
    printf("\nsilmek istediğiniz odanın numarasını giriniz  ");
    scanf("%d",&x);
    fseek(p,(x-1)*sizeof(hotel),SEEK_SET);
    fwrite(&gap_room,sizeof(hotel),1,p);
}
void upload(FILE *p)
{
    int money, x;
    hotel client;
    printf("\noda numarsini giriniz  ");
    scanf("%d",&x);
    fseek(p,(x-1)*sizeof(hotel),SEEK_SET);
    printf("\nodeme mikatrındaki degisikligi giriniz (-), (+) ");
    scanf("%d",&money);
    fread(&client,sizeof(hotel),1,p);
    client.payment=client.payment+money;
    fseek(p,(x-1)*sizeof(hotel),SEEK_SET);
    fwrite(&client,sizeof(hotel),1,p);
}
void write_file(FILE *p)
{
    hotel client;
    FILE *text;
    rewind(p);
    text=fopen("hotel_text","w");
    while(!feof(p))
    {
        fread(&client,sizeof(hotel),1,p);
        if(client.room!=0) 
            fprintf(text,"\noda no%d   isim:%s  soy isim:%s   odeme:%d   gun:%d   oda tipi:%c",client.room, client.name, client.surname, client.payment, client.day, client.room_tip);
    }
    fclose(text);
}
void show_clients(FILE *p)
{
    hotel client;
    rewind(p);
    while(!feof(p))
    {
        fread(&client,sizeof(hotel),1,p);
        if(client.room!=0)
            printf("\noda no:%d  %s %s  odeme:%d   gun:%d   oda tipi:%c",client.room, client.name, client.surname, client.payment, client.day, client.room_tip);
    }
}
int debt(FILE *p)
{
    int x;
    hotel client;
    x=payment(p);
    fseek(p,-1*sizeof(hotel),SEEK_CUR);
    fread(&client,sizeof(hotel),1,p);
    x=x-client.payment;
    return x;
}
int payment(FILE *p)
{
    int x;
    hotel client;
    fread(&client,sizeof(hotel),1,p);
    if((strcmp("a",&client.room_tip))==0) return (1000*client.day);
    if((strcmp("b",&client.room_tip))==0) return (700*client.day);
    if((strcmp("c",&client.room_tip))==0) return (400*client.day);
}
void show_gap(FILE *p)
{
    hotel client;
    int counter=1;
    rewind(p);
    while(!feof(p))
    {
        fread(&client,sizeof(hotel),1,p);
        if(client.room==0) printf("\n%d.oda",counter);
        counter++;
    }
}
void scanf_info(hotel *client)
{
    char a;
    printf("\noda numarası  "); scanf("%d",&client->room);
    printf("\noda tipi  "); scanf("%c",&a); scanf("%c",&client->room_tip);
    printf("\nadı  "); scanf("%s",client->name);
    printf("\nsoy ad  "); scanf("\n%s",client->surname);
    printf("\ngun sayısı  "); scanf("%d",&client->day);
    printf("yapılan odeme mikatrı  "); scanf("%d",&client->payment);
}