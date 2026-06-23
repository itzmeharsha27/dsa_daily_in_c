#include <stdio.h>

// Topological Sort (DFS)

int V = 6;
int adj[100][100];
int visited[100];
int stack[100], top = -1;

void push(int v)
{
    stack[++top] = v;
}

void dfs(int node)
{
    visited[node] = 1;

    for(int i=0;i<V;i++)
    {
        if(adj[node][i] && !visited[i])
        {
            dfs(i);
        }
    }

    push(node);
}

int main()
{
    return 0;
}