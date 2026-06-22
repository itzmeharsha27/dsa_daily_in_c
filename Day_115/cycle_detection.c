#include <stdio.h>

// Cycle Detection using DFS

int adj[100][100];
int visited[100];
int V = 5;

int dfs(int node, int parent)
{
    visited[node] = 1;

    for(int i=0;i<V;i++)
    {
        if(adj[node][i])
        {
            if(!visited[i])
            {
                if(dfs(i, node))
                    return 1;
            }
            else if(i != parent)
            {
                return 1;
            }
        }
    }

    return 0;
}

int main()
{
    return 0;
}