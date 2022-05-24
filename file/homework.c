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
void delete(hotel*);
void upload(hotel *);
void write_file(hotel *);
void show_clients(hotel *);
int debt(hotel*);
int payment(hotel *);
void show_gap(hotel*);
int main()
{
    hotel *p, *pp, client;
    int selection, x;
    printf("dosyayı olusturmak icin 1\nvar olan dosyayı kullanmak icin 2 giriniz lütfen.  ");
    scanf("%d",&selection);
    if(selection==1)
    {
        pp=fopen("hotel_room","w+");
        printf("\noda numarasi, isim, soyisi, yapilan odeme mikari, kalınacak gun sayisi, oda tipi (a, b, c)");
        while(1)
        {
            scanf("%d%s%s%d%d%c",&client.room, client.name, client.surname, &client.payment, &client.day, &client.room_tip);//😅
            if(feof(stdin)) break;
            fseek(pp,(client.room-1)*sizeof(hotel),SEEK_SET);
            fwrite(&client,sizeof(hotel),1,pp);
        }
        fclose(pp);
    }    
    p=fopen("hotel_room","r+");
    while((selection=menu())!=9)
    {
        switch(selection)
        {
            case 1:
                show_clients(p); break;
            case 2:
                printf("oda numarasını giriniz  ");
                scanf("%d",&x);
                fseek(p,(x-1)*sizeof(hotel),SEEK_SET);
                payment(p);
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
        printf("\n?  ");
        scanf("%d",&selection);
    }
    fclose(p);
    return 0;
}
int menu(void)
{
    int selection;
    printf("\nmusteri listesi 1\nödeme miktarı hesabı 2\nkalan borc miktarı 3\nbos odalar 4\noda numarasıyla arama 5\nmusteri silme 6\nbilgi guncelleme 7\ntext dosyaasına yazdırma 8   ");
    scanf("%d",&selection);
    return selection; 
}
void delete(hotel *p)
{
    int x;
    hotel gap_room={0," "," ",0,0,' '};
    printf("\nsilmek istediğiniz odanın numarasını giriniz  ");
    scanf("%d",&x);
    fseek(p,(x-1)*sizeof(hotel),SEEK_SET);
    fwrite(&gap_room,sizeof(hotel),1,p);
}
void upload(hotel *p)
{
    int money, x;
    hotel client;
    printf("\noda numarsini giriniz  ");
    scanf("%d",&x);
    fseek(p,(x-1)*sizeof(hotel),SEEK_SET);
    printf("\nodeme mikatrındaki degisikligi giriniz (-), (+) ");
    scanf("%d",&money);
    fread(&client,sizeof(hotel),1,p);
    client.payment=+money;
    fseek(p,(x-1)*sizeof(hotel),SEEK_SET);
    fwrite(&client,sizeof(hotel),1,p);
}
void write_file(hotel *p)
{
    hotel client;
    FILE *pp;
    rewind(p);
    fopen("hotel_text","w");
    while(!feof(p))
    {
        fread(&client,sizeof(hotel),1,p);
        fprintf(pp,"\noda no:%d  %s %s odeme:%d  gun:%d  oda tipi:%c",client.room, client.name, client.surname, client.payment, client.day, client.room_tip);
    }
    fclose(pp);
}
void show_clients(hotel *p)
{
    hotel client;
    rewind(p);
    while(!feof(p))
    {
        fread(&client,sizeof(hotel),1,p);
        printf("\noda no:%d  %s %s  odeme:%d   gun:%d   oda tipi:%c",client.room, client.name, client.surname, client.payment, client.day, client.room_tip);
    }
}
int debt(hotel *p)
{
    int x;
    hotel client;
    x=payment(p);
    fseek(p,-1*sizeof(hotel),SEEK_CUR);
    fread(&client,sizeof(hotel),1,p);
    x=-client.payment;
    return x;
}
int payment(hotel *p)
{
    int x;
    hotel client;
    fread(&client,sizeof(hotel),1,p);
    if((strcmp('a',&client.room_tip))==0) return 1000*client.day;
    if((strcmp('b',&client.room_tip))==0) return 700*client.day;
    if((strcmp('c',&client.room_tip))==0) return 400*client.day;
}
void show_gap(hotel *p)
{
    hotel client;
    int counter=1;
    rewind(p);
    while(!feof(p))
    {
        fread(&client,sizeof(hotel),1,p);
        if(client.room==0) printf("\n%d.oda. tip:%c ",counter,client.room_tip);
        counter++;
    }
}