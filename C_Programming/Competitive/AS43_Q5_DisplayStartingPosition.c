/*
    5. Write a program which accepts file name and one count from user and read
    that number of characters from starting position.

    Input : Demo.txt 12
    Output : Display first 12 characters from Demo.txt
*/

#include<stdio.h>
#include<io.h>
#include<fcntl.h>
#include<string.h>

void Display(char FName[], int iSize)
{
    char Buffer[1024] = {'\0'};
    int fd = 0, iRet = 0;

    fd = open(FName,O_RDONLY);

    if(fd == -1)
    {
        return;
    }
    else
    {
        lseek(fd,0,0);

        iRet = read(fd,Buffer,iSize);
        Buffer[iRet] = '\0';

        printf("Display first %d characters from %s : %s",iSize, FName, Buffer);

    }

    close(fd);
}

int main()
{
    char FileName[30] = {'\0'};
    int iValue = 0;

    printf("Enter file name : \n");
    scanf("%s",FileName);

    printf("Enter the number of characters : \n");
    scanf("%d",&iValue);

    Display(FileName,iValue);

    return 0;
}