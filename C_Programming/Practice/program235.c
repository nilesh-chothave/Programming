#include<stdio.h>
#include<string.h>

int main()
{
    char str[]= "Jay Ganesh";
    int iRet = 0;

    iRet=strlen(str);

    printf("Length of string is : %d\n",strlen(str));//10

    iRet=sizeof(str);

    printf("Size of string is: %d\n",iRet); //11

    return 0; 
}