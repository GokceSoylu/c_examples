/* I wonder whether ı can reate new file wit r mode or not */
#include <stdio.h>
int main()
{
    FILE *p;
    if((p=fopen("soylan","r+"))==NULL) printf("\ndosya acılamadı");
    fprintf(p,"necmiye soylu\n");
    fclose(p);
    return 0;
}//olmuyırmuş :))
//r+ ile açtığında pointer başta olacagından bu kodda kaç defa r+ ile çaliştirisan çaliştir dosya necmiye soylu olarak kalır ama
//a+ ile açarsan pointer dosyanın sonunda bulunacağı için her çalıştırmanda bir necmiye soylu daha yazaar :)