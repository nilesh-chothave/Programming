/*
    4. Write a program which accept string from user and check whether
    it contains vowels in it or not.

    Input : “marvellous”
    Output : TRUE

    Input : “Demo”
    Output : TRUE

    Input : “xyz”
    Output : FALSE
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    while (*str != '\0')
    {
        if(*str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U' ||
           *str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' )
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
    
}

int main()
{
    char Arr [20];
    BOOL bRet = FALSE;

    printf("Enter character : ");
    scanf("%[^'\n']s",Arr);

    bRet = ChkVowel(Arr);

    if(bRet == TRUE)
    {
        printf("Contains Vowel\n");
    }
    else
    {
        printf("There is no Vowel\n");
    }

    return 0;
}