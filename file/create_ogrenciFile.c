/* diğer programlarda kullanılacak olan ogrenci.txt dosyasını olusturen program */
#include <stdio.h>
#include <stdlib.h>
int main()
{ 
    struct student
    {
        int number;
        char name[20];
    };
    typedef struct student std;
    std student;
    FILE *p;
    p=fopen("ogrenci.txt","w");
    printf("\nogrenci adı  ");
    scanf("%s",student.name);
    printf("\nnumarası  ");
    scanf("%d",&student.number);
    while(!feof(stdin))
    {
        fwrite(&student,sizeof(std),1,p);
        printf("\nogrenci adı  ");
        scanf("%s",student.name);
        printf("\nnumarası  ");
        scanf("%d",&student.number);
    }
    fclose(p);
    return 0;
}