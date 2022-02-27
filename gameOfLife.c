/* game of life: Ayrıntılı bilgiye canerozcan.net proje2 dosyasından ulaşılabilir. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define satir 10
#define sutun 10
char yedek[satir][sutun];
void tarama(int [][sutun],int,int);
int main()
{
    int i,j,n,m,hucre,counter,yasam,degisiklik,matris[satir][sutun];
    char atama;
    srand(time(NULL));
    printf("oyun alanını kendiniz mi doldurmak istersiniz, bilgisayar tarafından mı yapılsın?\nkendim(k), bilgisayar(b) ");
    scanf("%c",&atama);
    if(atama=='B' || atama=='b')
    {
       for(i=0;i<satir;i++)//random olarak yasayan hücreleri atıyoruz
       {
           for(j=0;j<sutun;j++)
           {
                n=rand()%2;
                if(n==1)
                    matris[i][j]='X'; 
                else
                    matris[i][j]='-';
           }
       }
    }
    else if(atama=='K' || atama=='k')//yasayan hücrelerin yerlerini kullanıcı kendi belirliyor 
    {
        printf("\nkac adet hucre gireceksininz?\n");
        scanf("%d",&hucre);
        printf("atama yaparken herbir hürenin iki boyutlu olarak koordinatlarını giriniz(y,x)\n");
        for(i=0;i<hucre;i++)
        {
            scanf("\n%d",&n);
            scanf("\n%d",&m);
            matris[n][m]='X';
        }
        for(i=0;i<satir;i++)
        {
            for(j=0;j<sutun;j++)
            {
                if(matris[i][j]!='X')
                    matris[i][j]='-';
            }
        }
    }
    printf("maximum jenerasyon sayisini giriniz lutfen\n(maximum jenerasyon sayisina ulasildiginda oyun biter ");
    scanf("%d",&n);
    for(i=0;i<satir;i++)//matrisin ilk halini yazdiriyoruz
    {
        for(j=0;j<sutun;j++)
        {
            printf("%2c",matris[i][j]);
        }
        printf("\n");
    }
    m=1;
    counter=1;
    while(counter<=n)
    {
        degisiklik=0;
        yasam=0;
        for(i=0;i<satir;i++)//her bir hücrenin komsu sayisini kontrol edip degisikliği yedek matriste saklayacagız
        {
            for(j=0;j<sutun;j++)
            {
                tarama(matris,i,j);
            }
        }
        printf("\n\n%d.jenerasyon\n",counter);//degisiklikleri matrise atayip daha sonra yazdiriyoruz 
        for(i=0;i<satir;i++)
        {
            for(j=0;j<sutun;j++)
            {
                if(matris[i][j]!=yedek[i][j])//eger iki jenerasyon ard arda ayni olursa oyun biter
                    degisiklik=1;
                matris[i][j]=yedek[i][j];
                printf("%2c",matris[i][j]);
                if(matris[i][j]=='X')//matriste yasayan hic hücre kalmassa oyun biter
                    yasam=1;
            }
            printf("\n");
        }
        if(yasam==0)
        {
            printf("\nyasyan hucre kalmadigi icin oyun bitti");
            break;
        }
        if(degisiklik==0)
        {
            printf("\narka arkaya iki jenerasyon ayni oldugu icin oyun bitti");
            break;
        }
        counter++;
    }
    return 0;
}
void tarama(int matris[][sutun], int i,int j)
{
    int k,l,komsu=0;//öncelikle destan gibi kodu bir kaç satırda yazdiğin için tebrikler:) --> (komsu kontrolunde birkac degisiklik yaptimda :)
        if(j!=0 && matris[i][j-1]=='X')//komsu sayisini kontrol ediyoruz
            komsu++;
        if(j!=sutun-1 && matris[i][j+1]=='X')
            komsu++;
        if(i!=satir && matris[i+1][j]=='X')
            komsu++;
        if(i!=0 && matris[i-1][j]=='X')
            komsu++;
        if(matris[i][j]=='X')//yasayan hücrenin;
        {
            if(komsu<=1)
                yedek[i][j]='O';//0 yada 1 komsusu varsa yalnızlıktan ölür
            else if(komsu>3)
                yedek[i][j]='O';//3 ten fazla komsusu varsa kalabalıktan ölür (bu ben :))
            else
                yedek[i][j]='X';//2 yada 3 komsusu olması durumunda yasamaya devam eder
        }
        if(matris[i][j]=='-')//bos hücrenin
        {
            if(komsu==3)
                yedek[i][j]='X';//3 tane komsusu varsa yeni hücre doğar
            else
                yedek[i][j]='-';
        }    
}
