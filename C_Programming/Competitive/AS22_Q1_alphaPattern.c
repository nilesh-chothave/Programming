/*
    1. Accept number from user and display below pattern.
    
    Input : 5
    Output : A B C D E
*/

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    int ch = 65;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t",ch);
        ch++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of element : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}