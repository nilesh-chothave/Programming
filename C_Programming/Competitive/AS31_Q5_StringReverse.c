/*
    5. Write a program which accept string from user and display it inn
    reverse order.

    Input : “MarvellouS”
    Output : “SuollevraM”
*/

#include<stdio.h>

void Reverse(char *str)
{
    char *start = NULL;

    start = str;

    while(*str != '\0')
    {
        str++;
    }

    str--;

    while(start <= str)
    {
        printf("%c",*str);
        str--;
    }

}

int main()
{
    char Arr[20];

    printf("Enter character : ");
    scanf("%[^'\n']s",Arr);

    Reverse(Arr);

    return 0;
}