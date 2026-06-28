/*
    Q2.Accept a number from user and print that number of * on screen .

    Output :
        Enter a number : 5
        *   *   *   *   *
*/
#include<stdio.h>

void Display(int iNo)
{
    if (iNo<=0)
    {
        iNo = -iNo;
    }
    
    while(iNo > 0)
    {
        printf("*\t");
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}