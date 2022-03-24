/* string ve pointer a ilk deger verme denemelri */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int a[10];
    a[10]={1,2,3,4,5,6,7,8,9,0};
    return 0;
}/* tum dizilerde ya ilk deger atması yaparız yada input alırız. tanımladıgın sirada ilk deger atamsı yapmamıssan daha son ilk deger ataması yapar
gibi atama yapamassın bu durumu kodda goruyoruz. ancak stringse strcpy fonksiyonu bize burada bir kolaylık sagliyor.
pointer ile alakalı onemli bir nokta var --> pointer adres tutar olurda direkt deger atamak istersen hfizadan ona gore yer acmalısn:) */
 