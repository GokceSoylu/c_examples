#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char matris_1[12][22]={{"XXXXXXXXXXXXXXXXXXXXXX"},{"X                    X"},{"X                    X"},{"X                    X"},{"X                    X"},{"X                    X"},{"X                    X"},{"X                    X"},{"X                    X"},{"X                    X"},{"X                    X"},{"XXXXXXXXXXXXXXXXXXXXXX"}};
char matris_2[12][22]={{"XXXXXXXXXXXXXXXXXXXXXX"},{"X                    X"},{"X                    X"},{"X    XXXXXXXXXXX X XXX"},{"X              X  XXXX"},{"XXXX     XX    X     X"},{"XXXX     XX    X     X"},{"X              X  XXXX"},{"X    XXXXXXXXXXX X XXX"},{"X                    X"},{"X                    X"},{"XXXXXXXXXXXXXXXXXXXXXX"}};
char matris_3[12][22]={{"XXXXXXXXXXXXXXXXXXXXXX"},{"X  X                 X"},{"X  X                 X"},{"X  X  X   XXXXXXXXXXXX"},{"X  X  X               "},{"X  X  XXXXXXXX       X"},{"X  X  X  X            "},{"X     X  X     XXXXXXX"},{"X     X    X          "},{"XXXX  X    X         X"},{"X     X    X         X"},{"XXXXXXXXXXXXXXXXXXXXXX"}};
int motor (char[][22]);
int main()
{
    printf("\nDuvarlara carpmadan yemi yemelisinin\nbes yem yediginde bir sonraki levele gecersin\ntasları kontrol etmek icin\n   w\na    d tuslarını kullanınız\n   s\n");
    if(motor(matris_1)==1)
        if(motor(matris_2)==1)
            if(motor(matris_3)==1)
                printf("\nTEBRIKLER! KAZANDINIZ!\nSEN BIR DAHISIN");
        
    return 0;
}
int motor(char labirent [][22])
{
    char tas='o', adım;
    int def,n,m,x,y,i,j,old_i,old_j,duvar,yem=0;
    srand(time(NULL));
    i=2;
    j=2;
    labirent[i][j]=tas;
    while(1)
    {
        x=rand()%12;
        y=rand()%22;
        if(labirent[x][y]!='x' && labirent[x][y]!=tas)
        {
            labirent[x][y]='*';
            break;
        }    
        else
            continue;
    }
    for(n=0;n<12;n++)
    {
        for(m=0;m<22;m++)
        {
            printf("%c",labirent[n][m]);

        }
        printf("\n");
    }
    while(1) 
    {
        def=0;
        scanf("%c",&adım);
        old_i=i;
        old_j=j;
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
            case'd':
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
                def=1;
        }
        if(def!=1)
        {
            if(labirent[i][j]=='X')
                duvar=1;
            else
            {
                labirent[i][j]=tas;
                labirent[old_i][old_j]=' ';
                duvar=0;
            }
            if(duvar==1)
            {
                printf("BOOM! Duvara carptınız\nGAME OVER");
                return 0;
            }
            else if(i==x && j==y)
            {
                yem++;
                if(yem==5)
                {
                    printf("\nTEBRİKLER! ikinci levele geciyorsunuz\n");
                    return 1;
                }
                while(1)
                {
                    x=rand()%12;
                    y=rand()%22;
                    if(labirent[x][y]!='X' && labirent[x][y]!=tas)
                    {
                        labirent[x][y]='*';
                        break;
                    }
                }
            }
            for(n=0;n<12;n++)
            {
                for(m=0;m<22;m++)
                {
                    printf("%c",labirent[n][m]);
                }
                printf("\n");
            }
        }   
    }
}