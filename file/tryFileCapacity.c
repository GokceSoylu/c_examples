/* dosyaya en fazla ne kadar veri kaydedebilirim? */
#include <stdio.h>
int main()
{
    int i;
    FILE *p;
    p=fopen("memorize","w+");
    for(i=0;i<100000000;i++)
        fprintf(p,"\n%d",i);
    fclose(p);
    return 0;
}//baya var :))
//bir dosya açayım kullanıcı durdurana kadar isim sot isim vb veri kayıt edeyim. evet olurn