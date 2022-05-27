/* sort_file dosyasındaki elemanları küçükten büyüğe doğru sıralayınız */
#include <stdio.h>
int main()
{
    int number, number_old, i, j, size;;
    FILE *p;
    p=fopen("sort_file","r+");
    for(size=0;!feof(p);size++)
        fread(&number,sizeof(int),1,p);
    rewind(p);
    for(i=0;i<size-1;i++)
        for(j=0;j<size-1-i;j++)
        {
            fread(&number_old,sizeof(int),1,p);
            fread(&number,sizeof(int),1,p);
            fseek(p,-1*sizeof(int),SEEK_CUR);
            if(number_old>number)
            {
                fseek(p,-1*sizeof(int),SEEK_CUR);
                fwrite(&number,sizeof(int),1,p);
                fwrite(&number_old,sizeof(int),1,p);
                fseek(p,-1*sizeof(int),SEEK_CUR);
            }
        }
    rewind(p);//bunun yerine kapa aç da yapabiliriz
    while(1)
    {
        fread(&number,sizeof(int),1,p);
        if(feof(p)) break;
        printf("%d  ",number);
    }   
    fclose(p);
    return 0;
}//wuhuuu cool😎😊