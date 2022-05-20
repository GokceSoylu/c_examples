/* master mind oyununun yeni versiyonu. Oyun üç levelden oluşuyor */
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#define deneme_hakki1 7
#define deneme_hakki2 7
#define deneme_hakki3 10

int level_1 (void);
int level_2 (void);
int level_3 (void);
int main()
{
    int devam;
    devam=level_1();
    if(devam==0)
        devam=level_2();    
    if(devam==0)
        level_3();
    return 0;

    
}
int level_1 (void)
{
    int i, j, yanlis_tahmin=0;
    char renk[5], tahmin[5], n;
    srand(time(NULL));
    for(i=0;i<4;i++)
    {
        n=rand()% 4;
        switch (n)
        {
            case 0:
                renk[i]='R';
                break;
            case 1:
                renk[i]='Y';
                break;
            case 2:
                renk[i]='O';
                break;
            case 3:
                renk[i]='P';
                break;
        }
    }
    printf("\nbilgisayarin tuutgu renkler %s",renk);//kontrol için
    printf("\ntahmin oyunu ilk levelde RED (R), YELLOW (Y), ORAGNE (O), PURPLE (P) renklerini dogru sekilde siralamalisiniz %d deneme hakkiniz var.\nBasarilar:)",deneme_hakki1);
    for(i=0;i<deneme_hakki1;i++)
    {
        yanlis_tahmin=0;
        printf("\ntahmininiz?");
        gets(tahmin);
        if(strlen(tahmin)!=4)
        {
            printf("\ndort adet tahmin girmelisiniz");
            continue;
        }
        for(j=0;j<4;j++)
        {
            if(tahmin[j]!='R' && tahmin[j]!='Y' && tahmin[j]!='O' && tahmin[j]!='P')
            {
                printf("\nmevcut renkleri kullanınız\nTum tuslara basıp level gecemezsin ;))");
                yanlis_tahmin=-1;
                break;
            }
            if(renk[j]!= tahmin[j])
            {
                yanlis_tahmin++;
            }
        }
        if(yanlis_tahmin==0)
        {
            printf("\nTEBRIKLER tahmininiz dogru\nikinci levele geciyorsunuz");
            return 0;
        }    
        else if(yanlis_tahmin!=4)
        {
            if(yanlis_tahmin==3)
                printf("\n1 tane rengin yeri dogru\n hic yoktan iyidir ;)");
            else if(yanlis_tahmin!=-1)   
                printf("\n%d tane rengin yeri dogru, %d tane rengin yeri yanlis",4-yanlis_tahmin, yanlis_tahmin);
        }    
            
        else
            printf("\ndogru tahmin yok\nhahahaha pardon pardon gulmedim :))");
    }
    printf("\ndeneme hakkınız doldu\nsaglik olsun");
    printf("\nbilgisayarin tuttugu renkler; %s",renk);
    return 1;
       
}
int level_2(void)
{
    int i, j, yanlis_tahmin1, yanlis_tahmin2;
    char cift1[3], cift2[3], renk1[3], renk2[3], n;
    srand(time(NULL));
    for(i=0;i<2;i++)
    {
        n=rand()% 4;
        switch (n)
        {
            case 0:
                renk1[i]='R';
                break;
            case 1:
                renk1[i]='Y';
                break;
            case 2:
                renk1[i]='O';
                break;
            case 3:
                renk1[i]='P';
                break;
            default:
                break;
        }
    }
    //printf("\nbilgisayarin tuttugu renkeler ilk; %s",renk1); //kontrol için
    for(i=0;i<2;i++)
    {
        n=rand()% 4;
        switch(n)
        {
            case 0:
                renk2[i]='R';
                break;
            case 1:
                renk2[i]='Y';
                break;
            case 2:
                renk2[i]='O';
                break;
            case 3:
                renk2[i]='P';
                break;
            default:
                break;
        }
    }
    //printf("ikinci %s",renk2); //kontrol için
    printf("\noyunun ikinci asamasinda RED(R), YELLOW(Y), ORANGE(O), PURPLE(P) renklerininden olusan iki renk ciftini bilmeye calismalisiniz . ornegin YP OP vb.\n%d tahmin hakkiniz var\n basarilar:)",deneme_hakki2);
    for(i=0;i<deneme_hakki2;i++)
    {
        yanlis_tahmin1=0;
        yanlis_tahmin2=0;
        printf("\ntahminiz?\nilk cift");
        gets(cift1);
        printf("\nikinci cift");
        gets(cift2);
        if(strlen(cift1)!=2 || strlen(cift2)!=2)
        {
            printf("\nama cift dedik:))\nher seferinde iki adet renk girmelisiniz");
            continue;
        }
        for(j=0;j<2;j++)
        {
            if((cift1[j]!='Y' && cift1[j]!='R' && cift1[j]!='O' && cift1[j]!='P') || (cift2[j]!='R' && cift2[j]!='Y' && cift2[j]!='O' && cift2[j]!='P'))
            {
                printf("\nmevcut renkleri kullanmalisiniz ;)");
                yanlis_tahmin1=-1;
                break;
            }
            if(cift1[j]!=renk1[j])
                yanlis_tahmin1++;
            if(cift2[j]!=renk2[j])
                yanlis_tahmin2++;
        }
        if(yanlis_tahmin1==-1)
            continue;
        if(yanlis_tahmin1==0 && yanlis_tahmin2==0)
        {
            printf("\nvoov HARIKA tahminleriniz dogru ucuncu levele geciyorsunuz");
            return 0;
        }
        else if(yanlis_tahmin1==0 || yanlis_tahmin2==0)
            printf("\nrenk ciflerinden biri dogru");
        else if(yanlis_tahmin1==2 && yanlis_tahmin2==2)
            printf("\nops! hepsi yanlis");
        else 
            printf("\ntoplamda %d tane renk dogru, %d tane renk yanlis",4-(yanlis_tahmin1+yanlis_tahmin2),yanlis_tahmin1+yanlis_tahmin2);

    }
    printf("\nmalesef deneme hakkiniz doldu\nolsun, uzulme buda gecer ;))");
    printf("\nbilgissayarin belirledigi renkler, %s  %s",renk1,renk2);
    return 1;
}
int level_3()
{
    int i,j,n, yanlis_tahmin;
    char renk[5], tahmin[5];
    srand(time(NULL));
    for(i=0;i<4;i++)
    {
        n=rand()% 9;
        switch(n)
        {
            case 0:
                renk[i]='R';
                break;
            case 1:
                renk[i]='r';
                break;
            case 2:
                renk[i]='Y';
                break;
            case 3:
                renk[i]='y';
                break;
            case 4:
                renk[i]='O';
                break;
            case 5:
                renk[i]='o';
                break;
            case 6:
                renk[i]='P';
                break;
            case 7:
                renk[i]='p';
                break;
            default:
                break;
        }
    }
    //printf("bilgisayarin tuttugu renkler %s",renk); //kontrol için
    printf("\nbu levelde RED(R), light red(r), YELLOW(Y), light yellow(y), ORANGE(O), light orange(o), PURPLE(P), light purple(p) renklerinden dort tanesini ve dogru sekilde siralamalisiniz\n%d deneme hakkiniz var. BASARILAR:)",deneme_hakki3);
    for(i=0;i<deneme_hakki3;i++)
    {
        printf("\nTahmininiz?");
        gets(tahmin);
        yanlis_tahmin=0;
        if(strlen(tahmin)!=4)
        {
            printf("\ndort adet renk girmelisiniz\neyvah bi hakkiniz yandi;)");
            break;
        }
        for(j=0;j<4;j++)
        {
            if(tahmin[i]!='R' && tahmin[i]!='r' && tahmin[i]!='Y' && tahmin[i]!='y' && tahmin[i]!='O' && tahmin[i]!='o' && tahmin[i]!='P' && tahmin[i]!='p')
            {
                printf("\nbu olmadi;)\nMevcut renkleri kullanmalisiniz");
                yanlis_tahmin=-1;
                break;
            }
            if(renk[j]!=tahmin[j])
                yanlis_tahmin++;
        }
        if(yanlis_tahmin==0)
        {
            printf("\nsiz bir dahisiniz! Tahminlerinizin hepsi dogru\nKAZANDINIZ!");
            return 0;
        }
        else if(yanlis_tahmin==4)
            printf("\ndogru tahmin bulunmamaktadir\nyokluk zor sey ;)");
        else if(yanlis_tahmin!=-1)
            printf("\ntahminlerinizin %d tanesi dogru, %d tanesi yanlis",4-yanlis_tahmin,yanlis_tahmin);
    }
    printf("\nmalesef deneme hakkiniz doldu\n");
    printf("\ndogru cevap; %s",renk);
    return 1;
}
