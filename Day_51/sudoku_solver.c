#include <stdio.h>

int isSafe(int grid[9][9], int row, int col, int num);
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

int isSafe(int grid[9][9], int row, int col, int num)
{
    return 1;
}