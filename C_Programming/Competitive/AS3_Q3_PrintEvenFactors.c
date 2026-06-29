/*
    3. Write a program which accept number from user and print even factors of that
    number.
    
    Input : 36
    Output: 2 6 12 18
*/

#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)  // Updator
    {
        iNo = -iNo;
    }

    // Itration
   for(i = 1; i <= (iNo/2);i++)
   {
        if((iNo % i)==0 && (i % 2)==0 && i != 4)
        {
            printf(" %d\t",i);
        }
   }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue); // Function caller

    return 0;
}