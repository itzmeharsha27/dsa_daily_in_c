#include <stdio.h>

int main()
{
    int V = 5;
    int adj[100][100] = {0};

    adj[0][1] = adj[1][0] = 1;
    adj[0][2] = adj[2][0] = 1;
    adj[1][3] = adj[3][1] = 1;
    adj[2][4] = adj[4][2] = 1;

    return 0;
}