/*
    1.Write a program which accept radius of circle from user and calculate its area.
    Consider value of PI as 3.14. (Area = PI * Radius * Radius)

    Input : 5.3
    Output : 88.2026

    Input : 10.4
    Output : 339.6224
*/

#include<stdio.h>

double CicleArea(float fRadius)
{
     double dRedius = 3.14;
     dRedius = dRedius * fRadius * fRadius;
     return dRedius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius : ");
    scanf("%f",&fValue);

    dRet = CicleArea(fValue);

    printf("%lf\n",dRet);

    return 0;
}