#include<stdio.h>

typedef unsigned int UINT;

// Posision : 11

int main()
{
    UINT iNo = 0;
    UINT iMask = 0;

    printf("Enter number : \n");
    scanf("%d",&iNo);

    iMask = 0x400;

    iMask = iNo ^ iMask;

    printf("Updated number : %d\n",iMask);

  
    return 0;
}