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
    return 0;
}