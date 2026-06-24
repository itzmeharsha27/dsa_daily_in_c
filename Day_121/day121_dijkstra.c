#include <stdio.h>

// Dijkstra's Algorithm (Shortest Path)

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

    // Graph with weights
    adj[0][1] = 10;
    adj[0][4] = 5;
    adj[1][2] = 1;
    adj[4][1] = 3;
    adj[4][2] = 9;
    adj[4][3] = 2;
    adj[3][2] = 4;

    // Initialize distances
    for(int i=0;i<V;i++)
        dist[i] = INF;

    dist[src] = 0;

    // Dijkstra Algorithm
    for(int i=0;i<V-1;i++)
    {
        int u = minDistance();
        visited[u] = 1;

        for(int v=0;v<V;v++)
        {
            if(adj[u][v] && !visited[v] &&
               dist[u] + adj[u][v] < dist[v])
            {
                dist[v] = dist[u] + adj[u][v];
            }
        }
    }

    printf("Shortest distances from node %d:\n", src);
    for(int i=0;i<V;i++)
        printf("To %d = %d\n", i, dist[i]);

    return 0;
}