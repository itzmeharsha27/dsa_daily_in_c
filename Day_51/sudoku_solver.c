#include <stdio.h>

int solve(int grid[9][9]);

int main()
{
    int grid[9][9];

    printf("Enter Sudoku grid:\n");
    for(int i=0;i<9;i++)
        for(int j=0;j<9;j++)
            scanf("%d",&grid[i][j]);

    solve(grid);

    return 0;
}

int solve(int grid[9][9])
{
    return 0;
}