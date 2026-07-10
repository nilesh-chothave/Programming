/*
    2. Write a program which accept string from user and copy the
    contents of that string into another string. (Implement strncpy()
    function)

    Input : “Marvellous Multi OS”
    10
    Output : “Marvellous
*/

#include<stdio.h>

void StrNCpyX(char *src, char *dest, int iCnt)
{
    if(src == NULL || dest == NULL || iCnt < 0)
    {
        printf("Invalid input\n");
        return;
    }

    while((*src != '\0') && (iCnt != 0))
    {
        *dest = *src;
        src++;
        dest++;
        iCnt--;
    }
        *dest = '\0';
}

int main()
{
    char Arr[30] = "Marvellous Multi OS";
    char Brr[30];       // Empty string

    StrNCpyX(Arr,Brr,10);

    printf("%s",Brr);   // Marvellous

    return 0;
}