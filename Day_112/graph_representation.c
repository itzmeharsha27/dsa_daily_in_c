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

void addEdge(struct Node* adjList[], int u, int v)
{
    struct Node* newNode = createNode(v);
    newNode->next = adjList[u];
    adjList[u] = newNode;

    newNode = createNode(u);
    newNode->next = adjList[v];
    adjList[v] = newNode;
}

int main()
{
    int V = 4;

    struct Node* adjList[MAX];

    for(int i=0;i<V;i++)
        adjList[i] = NULL;

    addEdge(adjList, 0, 1);
    addEdge(adjList, 0, 2);
    addEdge(adjList, 1, 3);

    return 0;
}