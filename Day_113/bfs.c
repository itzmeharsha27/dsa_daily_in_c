#include <stdio.h>

// BFS Traversal (Queue Based)

int main()
{
    int V = 5;

    int adj[100][100] = {0};

    // Graph edges
    adj[0][1] = adj[1][0] = 1;
    adj[0][2] = adj[2][0] = 1;
    adj[1][3] = adj[3][1] = 1;
    adj[2][4] = adj[4][2] = 1;

    int queue[100];
    int front = 0, rear = 0;

    int visited[100] = {0};

    int start = 0;

    printf("BFS Traversal: ");

    queue[rear++] = start;
    visited[start] = 1;

    while(front < rear)
    {
        int node = queue[front++];
        printf("%d ", node);

        for(int i=0;i<V;i++)
        {
            if(adj[node][i] && !visited[i])
            {
                queue[rear++] = i;
                visited[i] = 1;
            }
        }
    }

    return 0;
}