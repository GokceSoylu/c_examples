/* array ve pointersla alakali bir kaç deneme */
#include <stdio.h>
int main()
{
    int array[10]={0,1,2,3,4,5,6,7,8,9},*p,x;
    p=array;
    printf("\n*p = %d",*p);//0
    x=((p+1)[2]);//dikkat * yok nasil adresi degilde degiskenin degerini atayabildik x e --> dostum [] ifadesi bunu sağliyor, dizilerdede aynı seyi yapmıyor muyuz?;)
    printf("\nx = %d",x);//3
    p=&((array+2)[2]);//dış parentez onemli, kimin adresi net olarak görmek istiyor
    printf("\n*p = %d",*p);//4
    printf("\n\n");
    p=array;
    x=p[1];
    printf("\nx = %d",x);//1
    x=(p[1]+10);
    printf("\nx = %d",x);//11
    printf("\np[1] = %d",p[1]);//1
    x=*(p+3);
    printf("\nx = %d",x);//3
    x=((p+1)[5]);
    printf("\nx = %d",x);//6
    return 0;
}//[] kullandiğimiz yerde * a geerek kalmadi aynı işi görüyorlar. birde x=(p[1]+10); dediğimizde sadece p[1] 10 ekleyip x e atadik p[1]de değişiklikmyapilmadi ;)