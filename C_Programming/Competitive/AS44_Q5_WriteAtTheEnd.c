/*
    5. Write application which accept file name from user and one string from user. Write
    that string at the end of file.

    Input : Demo.txt
    Hello World
    Output : Write Hello World at the end of Demo.txt file
*/

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

void AtTheEndOfFile(char FName[], char String[])
{
    int fd = 0;

    fd = open(FName,O_RDWR | O_APPEND);
    if(fd == -1)
    {
        return;
    }
    else
    {
        write(fd,String,strlen(String));
        close(fd);
    }
}

int main()
{
    char FileName [30] = {'\0'};
    char Data[100];

    printf("Enter the file name : \n");
    scanf("%s",FileName);

    printf("Enter the string : \n");
    scanf(" %[^'\n']s",Data);

    AtTheEndOfFile(FileName,Data);

    return 0;
}