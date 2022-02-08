/* mastermind oyunu; oyuncu bilgisayarın sectigi dort rengi doğru sırayla tahmin etmeye calısır */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char tahmin[5],renkler[5],kontrol;
    int deneme_hakki,i,j,k,num,x;
    
    printf("oyunda red(R), purple(P), green(G), orange(O), yellow(Y) renklerinden dort tanesini yerleride dogru olacak sekilde sıralamnız gerekmektedir.\nBasarilar:)");
    srand(time(NULL)); 
    for(k=0;k<4;k++)
    {
        num=rand() % 6;
        switch(num)
        {
            case 0:
                renkler[k]='R';
                break;
            case 1:
                renkler[k]='Y';
                break;
            case 2:
                renkler[k]='B';
                break;
            case 3:
                renkler[k]='O';
                break;
            case 4:
                renkler[k]='P';
                break;
            case 5:
                renkler[k]='G';
                break;
        }
        
    }
    
    printf("\nbilgisayarın belirledigi renkleri kontrol etmek icin gormek ister misiniz?(E/H)");
    scanf("%c",&kontrol);
    if(kontrol=='E')
        printf("%s",renkler);
    printf("\noyuncunun tahmin hakkini giriniz");
    scanf("%d",&deneme_hakki);
    
    for(j=0;j<deneme_hakki;j++)
    {
        int yanlis_tah=0;
        printf("\ntahmininiz :)");
        scanf("%s",tahmin);
        for(i=0;i<4;i++)
        {
            if(tahmin[i]=='R' || tahmin[i]=='Y' || tahmin[i]=='B' || tahmin[i]=='O' || tahmin[i]=='P' || tahmin[i]=='G')
                x=0;
            else
            {
                printf("\nMevcut renkleri kullanmalisiniz.");
                break;    
            } 
        }
        if(strlen(tahmin)!=4)
        {
            printf("\nyanlıs giris yaptınız dort renk tahmin etmelisiniz");
            continue;
        }
        for(i=0;i<4;i++)
        {
            if(renkler[i]!=tahmin[i])
                yanlis_tah++;
        }
        if(yanlis_tah==0)
        {
            printf("\nTEBRİKLER\nTahmininiz dogru.\nbilgisayarın tuttugu renkler; %s",renkler);
            break;
        }    
        else if(yanlis_tah==4)
        {
            printf("\ndogru tahmin yok");
            continue;
        }    
        else 
        {
            printf("\n%d rengin yeri yanlıs, %d rengin yeri dogru",yanlis_tah,4-yanlis_tah);
            continue;
        }   
    }
    if(j==deneme_hakki)
        printf("\ndeneme hakkınız doldu.\nbilgisayarin tuttugu renkler; %s",renkler);
    
    return 0;
}