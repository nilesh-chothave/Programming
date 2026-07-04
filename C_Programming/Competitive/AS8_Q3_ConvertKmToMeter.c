/*
    3. Write a program which accept distance in kilometre and convert it into meter. (1
    kilometre = 1000 Meter)

    Input : 5
    Output : 5000
    
    Input : 12
    Output : 12000
*/

#include<stdio.h>

int KMToMeter(int iNo)
{
    const int iMeter = 1000;
    return iNo * iMeter;
}
int main()
{
    int iVlaue = 0, iRet = 0;

    printf("Enter distance : ");
    scanf("%d",&iVlaue);

    iRet = KMtoMeter(iVlaue);

    printf("Distance in meter is : %d m \n",iRet);

    return 0;
}