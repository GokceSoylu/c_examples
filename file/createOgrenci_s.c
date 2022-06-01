/* diger programlarda kullanılacak ogrenci_s.txt dosyasını oluşturan program */
#include <stdio.h>
int main()
{
    struct student
    {
        int number;
        char name[20];
    };
    typedef struct student std;
    FILE *p;
    std student;
    p=fopen("ogrenci_s.txt","w");
    printf("\nname  ");
    scanf("%s",student.name);
    printf("\nnumber "); 
    scanf("%d",&student.number);
    while(!feof(stdin))
    {
        fprintf(p,"%s %d",student.name,student.number);
        printf("\nname  ");
        scanf("%s",student.name);
        printf("\nnumber "); 
        scanf("%d",&student.number);
    }
    fclose(p);
    return 0;
}