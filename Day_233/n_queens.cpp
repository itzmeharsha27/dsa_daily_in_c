#include <bits/stdc++.h>
using namespace std;

bool isSafe(vector<string>& board, int row, int col) {
    for (int i = 0; i < row; i++) {
        if (board[i][col] == 'Q')
            return false;
    }

    return true;
}

int main() {
    vector<string> board(4, string(4, '.'));

    board[0][1] = 'Q';

    cout << boolalpha << isSafe(board, 1, 1) << endl;
    cout << isSafe(board, 1, 2) << endl;

    return 0;
}