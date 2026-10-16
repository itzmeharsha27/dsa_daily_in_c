#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<vector<char>>& board, int row, int col, char digit) {
    for (int i = 0; i < 9; i++) {
        if (board[row][i] == digit) return false;
        if (board[i][col] == digit) return false;
    }
    return true;
}

int main() {
    vector<vector<char>> board(9, vector<char>(9, '.'));
    board[0][0] = '5';

    cout << boolalpha << isValid(board, 0, 1, '5') << '\n';
    cout << boolalpha << isValid(board, 0, 1, '3') << '\n';
    return 0;
}