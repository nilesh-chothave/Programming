/*
    2. Write application which accept file name from user and create that file.

    Input : Demo.txt
    Output : File created successfully.
*/

#include<stdio.h>
#include<fcntl.h>
#include<stdbool.h>

bool CreatFile(char FName[])
{
    int fd = 0;

    fd = creat(FName,0777);

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

    bRet = CreatFile(FileName);

    if(bRet == true)
    {
        printf("Unable of creat the file.\n");
    }
    else
    {
        printf("File created successfully.\n");
    }

    return 0;
}