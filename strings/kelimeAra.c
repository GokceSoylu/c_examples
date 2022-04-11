/* kullanıcıdan alınan cumlede yine kullanıcıdan alınan kelimeyi arayan c programı */
#include <stdio.h>
void sadelestirme(char[]);
int main()//boşluktan sonra kelime bitene kadar eşit olup olmadığına bakarım
{
    int i=0,j=0,flag;
    char array[50],a[20];
    gets(array);
    printf("aramak istediginiz kelimeyi giriniz lutfen");
    gets(a);
    sadelestirme(array);//cumledeki fazla boşlukları siler, bu fonksiyon olmasa kod çalişir ama fazla donguye sebep olur
    while(array[i])
    {
        j=0;
        if(i==0 || a[i]==' ')
            while(a[j])
            {
                flag=0;
                if(a[i+j]!=a[j])
                {
                    flag=1;
                    break;
                }    
                j++;
            }
        i++;
        if(flag==1)
            break;
    }
    if(flag==0)
        printf("\ncumlede aranan kelime bulunmaktadir");
    else
        printf("\ncumlede aranan kelime bulunmamaktadır");
    return 0;
}
void sadelestirme(char c[])
{
    int i=0,j;
    while(c[i])
    {
        if(c[i]==c[i+1] && c[i]==' ')
            for(j=i+1;c[j];j++)
                c[j]=c[j+1];
        else
            i++;
    }
}