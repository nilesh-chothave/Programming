/*
    3. Write application which accept file name from user and read all data from that file
    and display contents on screen.

    Input : Demo.txt
    Output : Display all data of file.
*/

#include<stdio.h>
#include<fcntl.h>
#include<string.h>

void Display(char FName[])
{
    char Buffer[1024] = {'\0'};
    int fd = 0, iRet = 0;

    fd = open(FName,O_RDONLY);

    while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
    {
        printf("%s",Buffer);

        memset(Buffer,'\0',sizeof(Buffer));
    }
    
    close(fd);

}

int main()
{
    char FileName[30] = {'\0'};

    printf("Enter file name : \n");
    scanf("%s",FileName);

    Display(FileName);

    return 0;
}