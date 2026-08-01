/*
    5. Write a program which accept one number from user and on its first 4
    bits. Return modified number.
*/

typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
    UINT iMask = 0xF;
    UINT iAns = 0;

    iAns = iNo | iMask;

    return iAns;
}