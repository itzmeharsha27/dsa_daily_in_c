#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node* createNode(int value)
{
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=NULL;
    return newNode;
}

int main()
{
    struct Node *list1=NULL;
    struct Node *list2=NULL;
    struct Node *list3=NULL;

    return 0;
}