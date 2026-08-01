/*
    1.Write a program which accept one number from user and off 7th bit of that
    number if it is on. Return modified number.
*/

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0x40;
    UINT iAns = 0;

    iAns = iNo & (~iMask);

    return iAns;
}