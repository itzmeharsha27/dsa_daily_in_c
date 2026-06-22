#include <stdio.h>

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
    adj[0][1] = adj[1][0] = 1;
    adj[1][2] = adj[2][1] = 1;
    adj[2][0] = adj[0][2] = 1; // cycle

    return 0;
}