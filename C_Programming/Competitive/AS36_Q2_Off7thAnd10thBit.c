/*
    2. Write a program which accept one number from user and off 7th and 10th
    bit of that number. Return modified number.
*/

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0x0240;
    UINT iAns = 0;

    iAns = iNo & (~iMask);

    return iAns;
}