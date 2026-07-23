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

int main()
{
    struct Node *list1=createNode(1);
    list1->next=createNode(4);
    list1->next->next=createNode(5);

    struct Node *list2=createNode(1);
    list2->next=createNode(3);
    list2->next->next=createNode(4);

    struct Node *list3=createNode(2);
    list3->next=createNode(6);

    struct Node *lists[3]={list1,list2,list3};

    struct Node *head=NULL,*tail=NULL;

    while(1)
    {
        int minIndex=-1;
        int minValue=INT_MAX;

        for(int i=0;i<3;i++)
        {
            if(lists[i]!=NULL && lists[i]->data<minValue)
            {
                minValue=lists[i]->data;
                minIndex=i;
            }
        }

        if(minIndex==-1)
            break;
    }

    return 0;
}