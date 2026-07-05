/*
1. Accept N numbers from user and accept one another number as NO ,
check whether NO is present or not.

Input : N : 6
NO: 66
Elements :85 66 3 66 93 88
Output : TRUE

Input : N : 6
NO: 12
Elements :85 11 3 15 11 111
Output : FALSE
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt]) == iNo)
        {
            return TRUE;
        }
    }
    return FALSE;

}

int main()
{
    int iSize = 0, iValue = 0, iCnt = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    printf("Check number is present : ");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable of allocate the memory ");
        return -1;
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter the element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p, iSize,iValue);

    if(bRet == TRUE)
    {
        printf("%d is present\n",iValue);
    }
    else
    {
        printf("%d is not present\n",iValue);   
    }

    free(p);

    return 0;
}