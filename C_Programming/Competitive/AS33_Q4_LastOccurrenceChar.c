/*
    4.Write a program which accept string from user and accept one
    character. Return index of last occurrence of that character.

    Input : "Marvellous Multi OS"
            M
    Output : 11

    Input : "Marvellous Multi OS"
            W
    Output : -1

    Input : "Marvellous Multi OS"
            e
    Output : 4
*/

#include<stdio.h>

int LastChar(char *str, char ch)
{

    int iIndex = 0;
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iIndex = iCnt;
        }
        str++;
        iCnt++;
    }
        if(iIndex != 0)
        {
            return iIndex;
        }
        else
        {
            return -1;
        }
}

int main()
{
    char Arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character : ");
    scanf(" %c",&cValue);

    iRet = LastChar(Arr, cValue);

    printf("Character location : %d",iRet);

    return 0;
}