#include <stdio.h>

void dfs(int graph[10][10], int visited[], int node, int n);
void bfs(int graph[10][10], int n);

int main()
{
    int n, graph[10][10], visited[10] = {0};

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&graph[i][j]);

    printf("DFS: ");
    dfs(graph, visited, 0, n);

    printf("\nBFS: ");
    bfs(graph, n);

    return 0;
}

void dfs(int graph[10][10], int visited[], int node, int n)
{
    visited[node] = 1;
    printf("%d ", node);

    for(int i=0;i<n;i++)
        if(graph[node][i] && !visited[i])
            dfs(graph, visited, i, n);
}

void bfs(int graph[10][10], int n)
{
    int queue[10], front=0, rear=0;
    int visited[10] = {0};

    queue[rear++] = 0;
    visited[0] = 1;

    while(front < rear)
    {
        int node = queue[front++];
        printf("%d ", node);

        for(int i=0;i<n;i++)
        {
            if(graph[node][i] && !visited[i])
            {
                queue[rear++] = i;
                visited[i] = 1;
            }
        }
    }
}