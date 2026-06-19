#include <stdio.h>
#include <stdlib.h>

// Graph Representation (Matrix + List)

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

void printGraph(struct Node* adjList[], int V)
{
    for(int i=0;i<V;i++)
    {
        struct Node* temp = adjList[i];
        printf("%d: ", i);
        while(temp)
        {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

int main()
{
    int V = 4;

    // Adjacency Matrix
    int adj[MAX][MAX] = {0};

    adj[0][1] = adj[1][0] = 1;
    adj[0][2] = adj[2][0] = 1;
    adj[1][3] = adj[3][1] = 1;

    printf("Adjacency Matrix:\n");
    for(int i=0;i<V;i++)
    {
        for(int j=0;j<V;j++)
            printf("%d ", adj[i][j]);
        printf("\n");
    }

    // Adjacency List
    struct Node* adjList[MAX];
    for(int i=0;i<V;i++)
        adjList[i] = NULL;

    addEdge(adjList, 0, 1);
    addEdge(adjList, 0, 2);
    addEdge(adjList, 1, 3);

    printf("\nAdjacency List:\n");
    printGraph(adjList, V);

    return 0;
}