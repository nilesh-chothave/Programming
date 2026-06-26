/*
    Q1.Accept a number from user and print that number of * on screen.

        output:
            Enter a number :5
            *   *    *   *   *
*/

#include <stdio.h>

void Display(int iNo)
{
    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    int iCnt = 1;

    while (iCnt <= iNo)
    {
        printf("*\t");
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}