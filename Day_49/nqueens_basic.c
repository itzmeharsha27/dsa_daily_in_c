#include <stdio.h>

int isSafe(int board[10][10], int row, int col, int n);
void solve(int board[10][10], int n, int row);

int main()
{
    int n, board[10][10] = {0};

    printf("Enter number of queens: ");
    scanf("%d", &n);

    solve(board, n, 0);

    return 0;
}

void solve(int board[10][10], int n, int row)
{
    if(row == n)
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
                printf("%d ", board[i][j]);
            printf("\n");
        }
        printf("\n");
        return;
    }

    for(int col = 0; col < n; col++)
    {
        if(isSafe(board, row, col, n))
        {
            board[row][col] = 1;
            solve(board, n, row + 1);
            board[row][col] = 0;
        }
    }
}

int isSafe(int board[10][10], int row, int col, int n)
{
    return 1;
}