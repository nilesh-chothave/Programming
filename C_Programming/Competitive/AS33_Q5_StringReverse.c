/*
  5. Write a program which accept string from user reverse that string
    in place.

    Input : "abcd"
    Output : "dcba"

    Input : "abba"
    Output : "abba"
*/

#include<stdio.h>

void StrRev(char *str)
{
    char *start = str;
    char temp;;

    while(*str != '\0')
    {
      str++;
    }
    str--;
    
    while(start < str)
    {
      temp = *start;
      *start = *str;
      *str = temp;

      start++;
      str--;
    }
}

int main()
{
    char Arr[20];

    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    StrRev(Arr);

    printf("Modified string is : %s",Arr);

    return 0;
}