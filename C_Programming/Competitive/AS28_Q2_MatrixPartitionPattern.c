/*
    2. Accept number of rows and number of columns from user and display below
    pattern.

    Input : iRow = 4 iCol = 4
    Output :*    *   *   #
            *    *   #   @
            *    #   @   @
            #    @   @   @
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = iRow; i >= 1; i--)
    {
        for(j = 1; j <= iRow; j++)
        {
            if(i == j)
            {
                printf("#\t");
            }
            else if(i < j
            )
            {
                printf("@\t");
            }
            else
            {
                printf("*\t");
  
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iVlaue2 = 0;

    printf("Enter numbeer of rows and columns : ");
    scanf("%d %d",&iValue1, &iVlaue2);

    Pattern(iValue1, iVlaue2);

    return 0;
}