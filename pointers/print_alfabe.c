/* pointer kullanarak tum alfabeyi yazdıran c kodunu yazınız */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    char *p;
    p=(char*)malloc(27*sizeof(char));
    for(i=0;i<26;i++)
        *(p+i)='A'+i;
    printf("\nalfabe\n%s",p);
    free(p);
    return 0;
}//bunu begendim