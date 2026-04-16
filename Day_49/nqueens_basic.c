#include <stdio.h>

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

}
