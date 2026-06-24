#include <stdio.h>

#define INF 1000000

int V = 5;
int adj[100][100];
int dist[100];
int visited[100];

int minDistance()
{
    int min = INF, idx = -1;
    for(int i=0;i<V;i++)
    {
        if(!visited[i] && dist[i] < min)
        {
            min = dist[i];
            idx = i;
        }
    }
    return idx;
}

int main()
{
    int src = 0;

    for(int i=0;i<V;i++)
        dist[i] = INF;

    dist[src] = 0;

    return 0;
}