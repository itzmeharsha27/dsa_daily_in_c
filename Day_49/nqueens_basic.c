#include <stdio.h>

// Function to check if placing queen is safe
int isSafe(int board[10][10], int row, int col, int n)
{
    // Check column
    for(int i = 0; i < row; i++)
        if(board[i][col])
            return 0;

    return 1;
}

// Backtracking function to solve N-Queens
void solve(int board[10][10], int n, int row)
{
    // Base case
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

            board[row][col] = 0; // backtrack
        }
    }
}

int main()
{
    int n, board[10][10] = {0};

    printf("Enter number of queens: ");
    scanf("%d", &n);

    // Validate input
    if(n <= 0)
    {
        printf("Invalid input\n");
        return 0;
    }

    solve(board, n, 0);

    return 0;
}