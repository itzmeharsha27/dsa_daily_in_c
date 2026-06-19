#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int v)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = v;
    newNode->next = NULL;
    return newNode;
}

int main()
{
    int V = 4;

    struct Node* adjList[MAX];

    for(int i=0;i<V;i++)
        adjList[i] = NULL;

    return 0;
}