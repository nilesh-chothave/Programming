/*
    2. Write a program which accepts file name from user and count number of
    small characters from that file.
    
    Input : Demo.txt
    Output : Number of small characters are 21
*/

#include<stdio.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024

int CountSmall(char FName[])
{
    char Buffer[BUFFER_SIZE] = {'\0'};
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
            if(Buffer[i] >= 'a' && Buffer[i] <= 'z')
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
    char FileName [30] = {'\0'};
    int iRet = 0;

    printf("Enter file name : \n");
    scanf("%[^'\n]s",FileName);

    iRet = CountSmall(FileName);

    printf("Number of Small characters are : %d\n",iRet);

    return 0;
}