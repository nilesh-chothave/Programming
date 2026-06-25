/*
    Q1.Write a program to divide two numbers.

    output:
    Division is :3
*/

#include<stdio.h>

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;

    if(iNo2 == 0)  // Seurity logic
    {
        return -1;
    }

    iAns = iNo1 / iNo2;

    return iAns;
}

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1,iValue2);

    printf("Division is %d\n",iRet);

    if(iRet == -1)
    {
        printf("Invalid input");
    }

    return 0;
}