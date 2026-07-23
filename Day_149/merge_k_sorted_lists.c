#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

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

void printList(struct Node *head)
{
    while(head)
    {
        printf("%d ",head->data);
        head=head->next;
    }
}

int main()
{
    /* previous code remains same */
    return 0;
}