#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<vector<char>>& board, int row, int col, char digit) {
    for (int i = 0; i < 9; i++) {
        if (board[row][i] == digit || board[i][col] == digit)
            return false;
    }

    int sr = (row / 3) * 3;
    int sc = (col / 3) * 3;

    for (int r = sr; r < sr + 3; r++)
        for (int c = sc; c < sc + 3; c++)
            if (board[r][c] == digit)
                return false;

    return true;
}

bool findEmpty(vector<vector<char>>& board, int& row, int& col) {
    for (row = 0; row < 9; row++)
        for (col = 0; col < 9; col++)
            if (board[row][col] == '.')
                return true;

    return false;
}

bool solve(vector<vector<char>>& board) {
    int row, col;

    if (!findEmpty(board, row, col))
        return true;

    for (char digit = '1'; digit <= '9'; digit++) {
        if (isValid(board, row, col, digit)) {
            board[row][col] = digit;

            if (solve(board))
                return true;

            board[row][col] = '.';  // Backtrack
        }
    }

    return false;
}

int main() {
    vector<vector<char>> board(9, vector<char>(9, '.'));

    if (solve(board))
        cout << "Sudoku solved\n";
    else
        cout << "No solution\n";

    return 0;
}