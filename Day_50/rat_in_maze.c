#include <stdio.h>

int isSafe(int maze[10][10], int x, int y, int n);
void solve(int maze[10][10], int sol[10][10], int x, int y, int n);

int main()
{
    int n, maze[10][10], sol[10][10] = {0};

    printf("Enter size of maze: ");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Invalid input\n");
        return 0;
    }

    printf("Enter maze:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&maze[i][j]);

    solve(maze, sol, 0, 0, n);

    return 0;
}

int isSafe(int maze[10][10], int x, int y, int n)
{
    if(x >= 0 && y >= 0 && x < n && y < n && maze[x][y] == 1)
        return 1;

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

    if(isSafe(maze, x, y, n))
    {
        sol[x][y] = 1;

        solve(maze, sol, x+1, y, n);
        solve(maze, sol, x, y+1, n);

        sol[x][y] = 0;
    }
}