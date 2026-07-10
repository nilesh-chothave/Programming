/*
    3. Write a program which accept string from user and return
    difference between frequency of small characters and frequency of
    capital characters.

    Input : “MarvellouS”

    Output : 6 (8-2)
*/

#include<stdio.h>

int Difference(char *str)
{
    int iCapital = 0, iSmall = 0;

    if(str == NULL)
    {
        return 0;
    }

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCapital++;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            iSmall++;
        }
        str++;
    }
    return iSmall-iCapital;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter character : ");
    scanf("%[^'\n]s",Arr);

    iRet = Difference(Arr);

    printf("%d",iRet);

    return 0;
}