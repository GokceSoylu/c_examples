#include <stdio.h>
int i,j;
int main()
{
    int m,n,i,j,old_i,old_j,counter;
    char tas,adım,matris[12][22]={{"X XXXXXXXXXXXXXXXXXXXX"},{"X    X      X        X"},{"X XX X XXX  X        X"},{"X X  X   X     X X   X"},{"X XXXXXX  XX   X X XXX"},{"X  X   X   XXX   X X X"},{"XX   XXX X   X   X X X"},{"X    X   XXXXXXXXX X X"},{"X XXXX X   X         X"},{"X      X   X    XXXXXX"},{"X      X   X         X"},{"XXXXXXXXXXXXXXXXXX XXX"}};
    printf("\n\noyunda duvarlara carpmadan tasınızı labirentten cikarmalisiniz\n\ntasınızı hareket ettirmek icin:\n\n  w\na   d tuslarını kullanınız\n  s");
    printf("\n\navatarınızı giriniz lutfen");
    scanf("%s",&tas);
    counter=0;
    i=0;
    j=1;
    matris[i][j]=tas;
    printf("\n-------LABIRENT-------\n");
    for(n=0;n<12;n++)
    {
        for(m=0;m<22;m++)
        {
            printf("%c",matris[n][m]);
        }
        printf("\n");
    }
    while(1)
    {
        old_i=i;
        old_j=j;
        scanf("%c",&adım);
        switch(adım)
        {
            case 'a':
            {
                j--;
                break;
            }
            case 's':
            {
                i++;
                break;
            }
            case 'd':
            {
                j++;
                break;
            }
            case 'w':
            {
                i--;
                break;
            }
            default:
                continue;//ahh ahh bir continue nelere sebep olur :))
        }
        if(matris[i][j]=='X')
        {
            printf("\nops! duvara carptınız\n\nGAME OVER");
            return 0;
        }
        else if(i==11 && j==18)
        {
            printf("\n\nTEBRIKLER! CIKISA ULASTINIZ");
            return 0;
        }    
        else
        {
            matris[i][j]=tas;
            matris[old_i][old_j]=' ';
        }
        for(m=0;m<12;m++)
        {
            for(n=0;n<22;n++)
            {
                printf("%c",matris[m][n]);
            }
            printf("\n");
        }
    }

    return 0;
}