/*
    5. Write a program which 2 strings from user and concat second string
    after first string. (Implement strcat() function).

    Input : "Marvellous Infosystems"
            "Logic Building"
    Output : "Marvellous Infosystems Logic Building"
*/

#include<stdio.h>

void StrCat(char *src, char *dest)
{ 
    if(src == NULL || dest == NULL)
    {
        return;
    }

    while(*src != '\0')
    {
        src++;
    }

    while(*dest != '\0')
    {
        *src = *dest;
        src++;
        dest++;
    }

    *src = '\0';
}

int main()
{
    char Arr[50] = "Marvellous Infosystem ";
    char Brr[30] = "Logic Building";

    StrCat(Arr,Brr);

    printf("%s\n",Arr);

    return 0;
}