#include <stdio.h>

int dfs(int graph[10][10], int visited[], int node, int parent, int n);

int main()
{
    int n, graph[10][10], visited[10] = {0};

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&graph[i][j]);

    dfs(graph, visited, 0, -1, n);

    return 0;
}

int dfs(int graph[10][10], int visited[], int node, int parent, int n)
{
    return 0;
}