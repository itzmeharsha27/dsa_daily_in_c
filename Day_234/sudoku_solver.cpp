#include <iostream>
#include <vector>
using namespace std;

bool findEmpty(vector<vector<char>>& board, int& row, int& col) {
    for (row = 0; row < 9; row++) {
        for (col = 0; col < 9; col++) {
            if (board[row][col] == '.')
                return true;
        }
    }
    return false;
}

int main() {
    vector<vector<char>> board(9, vector<char>(9, '.'));

    int row, col;
    if (findEmpty(board, row, col))
        cout << "Empty cell: " << row << ", " << col << '\n';
    else
        cout << "Board is complete\n";

    return 0;
}