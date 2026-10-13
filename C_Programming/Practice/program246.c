#include<stdio.h>

int strlenX(char *str)
{
    *str = 'A';
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0 ;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenX(Arr);

    printf("String is : %s\n",Arr);

    return 0; 
}