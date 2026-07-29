/*
    1. Write application which accept file name from user and open that file in read mode.

    Input : Demo.txt
    Output : File opened successfully.
*/

#include<stdio.h>
#include<fcntl.h>
#include<stdbool.h>

bool OpenFile(char FName[])
{
    int fd = 0;

    fd = open(FName,O_RDONLY);

    if(fd == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char FileName[30] = {'\0'};
    bool bRet = false;

    printf("Enter the file name : \n");
    scanf("%s",FileName);

    bRet = OpenFile(FileName);

    if(bRet == true)
    {
        printf("Unable to open the file.\n");
    }
    else
    {
        printf("File opened successfully.");
    }

    return 0;
}