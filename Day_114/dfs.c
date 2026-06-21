#include <stdio.h>

int adj[100][100];
int visited[100];
int V = 5;

void dfs(int node)
{
    visited[node] = 1;
    printf("%d ", node);

    for(int i=0;i<V;i++)
    {
        if(adj[node][i] && !visited[i])
        {
            dfs(i);
        }
    }
}

int main()
{
    adj[0][1] = adj[1][0] = 1;
    adj[0][2] = adj[2][0] = 1;
    adj[1][3] = adj[3][1] = 1;
    adj[2][4] = adj[4][2] = 1;

    printf("DFS Traversal: ");
    dfs(0);

    return 0;
}