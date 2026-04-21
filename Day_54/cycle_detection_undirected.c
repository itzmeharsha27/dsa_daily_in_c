#include <stdio.h>

int dfs(int graph[10][10], int visited[], int node, int parent, int n)
{
    visited[node] = 1;

    for(int i=0;i<n;i++)
    {
        if(graph[node][i])
        {
            if(!visited[i])
            {
                if(dfs(graph, visited, i, node, n))
                    return 1;
            }
            else if(i != parent)
                return 1;
        }
    }
    return 0;
}

int main()
{
    int n, graph[10][10], visited[10] = {0};

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Invalid input\n");
        return 0;
    }

    printf("Enter adjacency matrix:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&graph[i][j]);

    printf("Checking...\n");

    if(dfs(graph, visited, 0, -1, n))
        printf("Cycle Detected\n");
    else
        printf("No Cycle\n");

    return 0;
}