#include<stdio.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node obj;

    obj.data = 11;      // direct member insalization
    obj.next = NULL;

    printf("%d\n",obj.data);   // 11

    return 0;
}