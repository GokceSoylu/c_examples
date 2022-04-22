/* öğrenci numaranızdaki tek rakamları bir listeye, çift rakamları ise başka bir listeye atayınız. Daha sonra her iki listeyi de yazdırınız */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct even_digits
    {
        int num2;
        struct even_digits *next2;
    };
    struct odd_digits
    {
        int num1;
        struct odd_digits *next1;
    };
    typedef struct even_digits even;
    typedef struct odd_digits odd;
    even *head2, *p2;
    odd *head1, *p1;
    int num, digit, i=0 ,j=0;
    printf("\nenter the student number please ");
    scanf("%d",&num);
    while(num>0)
    {
        digit=num%10;
        num=num/10;
        if(digit%2==0)//even
        {
            if(i==0)
            {
                head2=(even*)malloc(sizeof(even));
                p2=head2;
            }
            else
            {
                p2->next2=(even*)malloc(sizeof(even));
                p2=p2->next2;
            }
            p2->num2=digit;
            i++;
        }
        else 
        {
            if(j==0)
            {
                head1=(odd*)malloc(sizeof(odd));
                p1=head1;
            }
            else
            {
                p1->next1=(odd*)malloc(sizeof(odd));
                p1=p1->next1;
            }
            p1->num1=digit;
            j++;
        }
    }
    p1->next1=NULL;
    p2->next2=NULL;
    p1=head1;
    p2=head2;
    printf("\n");
    while(p1!=NULL)
    {
        printf("%d ",p1->num1);
        p1=p1->next1;
    }
    printf("\n");
    while(p2!=NULL)
    {
        printf("%d ",p2->num2);
        p2=p2->next2;
    }
    return 0;
}