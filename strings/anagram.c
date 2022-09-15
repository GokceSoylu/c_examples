#include <stdio.h>

int Anagram(char str1[], char str2[]);

int main()
{
    char str1[100], str2[100];
    printf("\n\n Function : whether two given strings are anagram :\n");
    //Example : pears and  spare, stone and tones, listen and slient  

    printf(" Input the  first String : ");
    scanf("%s",str1);
    printf(" Input the  second String : ");
    scanf("%s",str2);
 
    if(Anagram(str1, str2) == 1)
       printf(" %s and %s are Anagram.\n\n",str1,str2);

    else
       printf(" %s and %s are not Anagram.\n\n",str1,str2);
    
    return 0;
}
 
//Function to check whether two passed strings are anagram or not
int Anagram(char str1[], char str2[])
{
    int str1ChrCtr[256] = {0}, str2ChrCtr[256] = {0};
    int ctr,a,b;
    
    /* check the length of equality of Two Strings */
    for(a=0;str1[a]!='\0';a++);
    for(b=0;str2[b]!='\0';b++);
    if(a!=b)
        return 0;
    
    //count frequency of characters in str1 
    for(ctr = 0; str1[ctr] != '\0'; ctr++)
        str1ChrCtr[str1[ctr]]++;
    
    //count frequency of characters in str2 
    for(ctr = 0; str2[ctr] != '\0'; ctr++)
        str2ChrCtr[str2[ctr]]++;
    
    //compare character counts of both strings 
    for(ctr = 0; ctr < 256; ctr++)
        if(str1ChrCtr[ctr] != str2ChrCtr[ctr])
            return 0;
    
    return 1;
}



