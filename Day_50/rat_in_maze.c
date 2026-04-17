#include <stdio.h>

void solve(int maze[10][10], int sol[10][10], int x, int y, int n);

int main()
{
    int n, maze[10][10], sol[10][10] = {0};

    printf("Enter size of maze: ");
    scanf("%d", &n);

    printf("Enter maze:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&maze[i][j]);

    solve(maze, sol, 0, 0, n);

    return 0;
}

void solve(int maze[10][10], int sol[10][10], int x, int y, int n)
{
    if(x == n-1 && y == n-1)
    {
        sol[x][y] = 1;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                printf("%d ", sol[i][j]);
            printf("\n");
        }
        return;
    }
}