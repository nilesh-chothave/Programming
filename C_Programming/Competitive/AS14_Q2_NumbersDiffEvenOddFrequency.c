/*
2. Accept N numbers from user and return difference between frequency of
even number and odd numbers.

Input : N : 7
Elements :85 66 3 80 93 88 90
Output : 1 (4 -3)
*/

#include<stdio.h>
#include<stdlib.h>

int FrequencyOfOddEven(int Arr[], int iLength)
{
    int iCnt = 0, iEvenCount = 0, iOddCount = 0, iFrqDif = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEvenCount++;
        }
        else
        {
            iOddCount++;
        }
    }
    iFrqDif =  iEvenCount-iOddCount;

    if(iFrqDif < 0)
    {
        iFrqDif = -iFrqDif;
    }

    return iFrqDif;

}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

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

    iRet = FrequencyOfOddEven(p, iSize);

    printf("Result is : %d",iRet);

    free(p);

    return 0;
}