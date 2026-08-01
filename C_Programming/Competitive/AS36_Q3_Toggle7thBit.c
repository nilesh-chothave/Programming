/*
    3. Write a program which accept one number from user and toggle 7th bit of
    that number. Return modified number.
*/

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0x40;
    UINT iAns = 0;

    iAns = iNo ^ iMask;

    return iAns;
}