#include <stdio.h>

int adj[100][100];
int visited[100];
int V = 5;

void dfs(int node)
{
    visited[node] = 1;
    printf("%d ", node);
}

int main()
{
    return 0;
}