/*
    5. Accept on character from user and check whether that character is vowel
(a,e,i,o,u) or not.

    Input : E Output : TRUE
    Input : d Output : FALSE
*/

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL Chkvowel(char cNo)
{
    if(cNo == 'A' || cNo == 'E' || cNo == 'I' || cNo == 'O' || cNo == 'U' ||
        cNo == 'a'|| cNo == 'e' || cNo == 'i' || cNo == 'o' || cNo == 'u')
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
}
int main()
{
    char cvalue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Character\n");
    scanf("%c",&cvalue);

    bRet = Chkvowel(cvalue);

    if(bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return 0;
}