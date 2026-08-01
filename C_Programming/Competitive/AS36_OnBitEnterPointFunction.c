/*
    Write entry point function to call below helper functions
    separately.
*/

#include<stdio.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo);

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter the number : \n");
    scanf("%u",&iValue);

    iRet = OnBit(iValue);
    printf("Update number is : %u",iRet);
    
    return 0;
}