/*
    Write entry point function to call below helper functions
    separately.
*/

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo);

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter the number : \n");
    scanf("%u",&iValue);

    iRet = OffBit(iValue);
    printf("Update number is : %u\n",iRet);
    
    return 0;
}