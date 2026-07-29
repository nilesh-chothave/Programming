/*
    4. Write a program which accepts file name and one character from user and
    count number of occurrences of that characters from that file.

    Input : Demo.txt ‘M’
    Output : Frequency of M is 7
*/

#include<stdio.h>
#include<io.h>
#include<fcntl.h>
#include<string.h>

int CountChar(char FName[], char ch)
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
            if(Buffer[i] == ch)
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
    char cValue = '\0';
    int iRet = 0;

    printf("Enter file name : \n");
    scanf("%s",FileName);

    printf("Enter the character : \n");
    scanf(" %c",&cValue);

    iRet = CountChar(FileName,cValue);

    printf("Frequency of %c is : %d\n",cValue,iRet);

    return 0;
}