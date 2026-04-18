#include <stdio.h>

// Check if safe to place number
int isSafe(int grid[9][9], int row, int col, int num)
{
    for(int x=0;x<9;x++)
        if(grid[row][x]==num || grid[x][col]==num)
            return 0;

    int startRow = row - row%3;
    int startCol = col - col%3;

    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            if(grid[i+startRow][j+startCol]==num)
                return 0;

    return 1;
}

// Backtracking solver
int solve(int grid[9][9])
{
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(grid[i][j] == 0)
            {
                for(int num=1; num<=9; num++)
                {
                    if(isSafe(grid,i,j,num))
                    {
                        grid[i][j]=num;
                        if(solve(grid))
                            return 1;
                        grid[i][j]=0;
                    }
                }
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    int grid[9][9];

    printf("Enter Sudoku grid:\n");
    for(int i=0;i<9;i++)
        for(int j=0;j<9;j++)
            scanf("%d",&grid[i][j]);

    if(solve(grid))
    {
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
                printf("%d ",grid[i][j]);
            printf("\n");
        }
    }

    return 0;
}