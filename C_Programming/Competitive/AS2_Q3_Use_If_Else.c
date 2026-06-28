/*
    Q3.Accept one number from user if number is less than 10 then print "Hello" otherwise print "Demo" on screen.

    output:
        Enter a number :8
        Hello

        output:
        Enter a number :20
        Demo
*/

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}