/*
    5. Write a program which accept number from user and display its table in reverse
    order.

    Input : 2
    Output : 20 18 16 14 12 10 8 6 4 2

    Input : 5
    Output : 50 45 40 35 30 25 20 15 10 5
    
    Input : -5
    Output : 50 45 40 35 30 25 20 15 10 5
*/

#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iNo * iCnt);
    }
    printf("\n");

}

int main()
{
    int iValue = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}

/*

Input : 2
Output : 2 4 6 8 10 12 14 16 18 20

Input : 5
Output : 5 10 15 20 25 30 35 40 45 50

Input : -5
Output : 5 10 15 20 25 30 35 40 45 50

*/