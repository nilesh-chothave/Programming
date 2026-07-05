/*
5. Accept N numbers from user and accept one another number as NO ,
return frequency of NO form it.

Input : N : 6
NO: 66
Elements :85 66 3 66 93 88
Output : 2

Input : N : 6
NO: 12
Elements :85 11 3 15 11 111
Output : 0
*/

#include<stdio.h>
#include<stdlib.h>

int Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0, iFrq = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt]== iNo)
        {
            iFrq++;
        }
    }

    return iFrq;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0, iNo = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);
    
    printf("Enter number of that you want to find : ");
    scanf("%d",&iNo);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter the element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Check(p, iSize, iNo);

    printf("Frquency of 11 is : %d",iRet);

    free(p);

    return 0;
}