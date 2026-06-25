/*
    Q2.Write a program to print 5 times "Marvellous" on console.

    OutPut :
            Marvellous
            Marvellous
            Marvellous
            Marvellous
            Marvellous
            Marvellous
*/

#include<stdio.h>

void Display()
{
    int iCnt = 0; // loop counter

    for(iCnt = 1; iCnt <=5; iCnt++)
    {
        printf("Marvellous\n");
    }
}

int main()
{
    Display();

    return 0;
}