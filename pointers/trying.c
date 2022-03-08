/* int *i=&a ifadesi için deneme */
#include <stdio.h>
int main()
{
    int a=7;
    int *i=&a;//doğru!
    //i=&a; --> doğru!
    //*i=&a;--> yanlış!
    //*i=a; --> yanlış!
    printf("%d",*i);
    return 0;//yani normalde adres atamsında * kullanılmaz ama ilk tanımlama kısmında atama yapmak istiyorsan bişey olmaz.
}