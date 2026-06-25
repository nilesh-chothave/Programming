/*
    Q4.Accept a number from user and check whether it is divisible by 5 or not.

    output:

            Enter number
            250
            250 is divisible by 5
*/

#include<stdio.h>

typedef int BOOL;
#define TRUE 1          // macro    
#define FALSE 0         // macro

BOOL Check(int iNo) // 15
{
    if((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by 5\n");
    }

    return 0;
}