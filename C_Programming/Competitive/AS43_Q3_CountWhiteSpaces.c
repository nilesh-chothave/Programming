/*
    3. Write a program which accepts file name from user and count number of
    white spaces from that file.

    Input : Demo.txt
    Output : Number of white spaces are 13
*/

#include<stdio.h>
#include<io.h>
#include<fcntl.h>
#include<string.h>

int CountWhite(char FName[])
{
    char Buffer[] = {'\0'};
    int fd = 0, iRet = 0, i = 0, iCount = 0;

    fd = open(FName,O_RDONLY);
    if(fd == -1)
    {
        return -1;
    }

    while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
    {
        for(i = 0; i < iRet; i++)
        {
            if(Buffer[i] >= ' ' && Buffer[i] <= ' ')
            {
                iCount++;
            }
        }
        memset(Buffer,'\0',sizeof(Buffer));
    }

    return iCount;

    close(fd);
}

int main()
{
    char FileName[30] = {'\0'};
    int iRet = 0;

    printf("Enter file name : \n");
    scanf("%s",FileName);

    iRet = CountWhite(FileName);

    printf("Number of white spaces are : %d\n",iRet);

    return 0;
}