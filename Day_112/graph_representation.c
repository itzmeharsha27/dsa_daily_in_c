#include <stdio.h>

#define MAX 100

int main()
{
    int V = 4;

    int adj[MAX][MAX] = {0};

    adj[0][1] = adj[1][0] = 1;
    adj[0][2] = adj[2][0] = 1;
    adj[1][3] = adj[3][1] = 1;

    for(int i=0;i<V;i++)
    {
        for(int j=0;j<V;j++)
        {
            printf("%d ", adj[i][j]);
        }
        printf("\n");
    }

    return 0;
}