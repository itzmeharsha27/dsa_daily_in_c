#include <stdio.h>

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
    adj[5][2] = 1;
    adj[5][0] = 1;
    adj[4][0] = 1;
    adj[4][1] = 1;
    adj[2][3] = 1;
    adj[3][1] = 1;

    for(int i=0;i<V;i++)
    {
        if(!visited[i])
            dfs(i);
    }

    return 0;
}