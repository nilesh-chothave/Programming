/*
    3.Write a program which accept string from user and accept one
    character. Return index of first occurrence of that character.

    Input : "Marvellous Multi OS"
            M
    Output : 0

    Input : "Marvellous Multi OS"
            W
    Output : -1

    Input : "Marvellous Multi OS"
            e
    Output : 4
*/

#include <stdio.h>

int FirstChar(char *str, char ch)
{
    
}

int main()
{
        char Arr[20];
        char cValue;
        int iRet = 0;

        printf("Enter string : ");
        scanf("%[^'\n']s", Arr);

        printf("Enter the character : ");
        scanf(" %c", &cValue);

        iRet = FirstChar(Arr, cValue);

        printf("Character location : %d", iRet);

        return 0;
}