#include <bits/stdc++.h>
using namespace std;

bool isSafe(vector<string>& board, int row, int col) {
    for (int i = 0; i < row; i++) {
        if (board[i][col] == 'Q')
            return false;
    }

    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 'Q')
            return false;
    }

    for (int i = row - 1, j = col + 1;
         i >= 0 && j < board.size(); i--, j++) {
        if (board[i][j] == 'Q')
            return false;
    }

    return true;
}

int main() {
    vector<string> board(4, string(4, '.'));

    board[0][1] = 'Q';

    cout << boolalpha << isSafe(board, 1, 2) << endl;
    cout << isSafe(board, 1, 3) << endl;

    return 0;
}