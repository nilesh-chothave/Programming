/*
    4. Write application which accept file name from user and display size of file.

    Input : Demo.txt
    Output : File size is 56 bytes
*/

#include<stdio.h>
#include<fcntl.h>
#include<string.h>

int FileSize(char FName[])
{
    char Buffer[1024] = {'\0'};
    int fd = 0, iRet = 0, iSize = 0;

    fd = open(FName,O_RDONLY);

    if(fd == -1)
    {
        return -1;
    }

    while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
    {
        iSize = iSize + iRet;
    }

    return iSize;

    close(fd);

}

int main()
{
    char FileName[30] = {'\0'};
    int iRet = 0;

    printf("Enter the file name : \n");
    scanf("%s",FileName);

    iRet = FileSize(FileName);

    printf("File size is : %d bytes \n",iRet);

    return 0;
}