#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> result;

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

void solve(int row, vector<string>& board) {
    int n = board.size();

    if (row == n) {
        result.push_back(board);
        return;
    }

    for (int col = 0; col < n; col++) {
        if (isSafe(board, row, col)) {
            board[row][col] = 'Q';

            solve(row + 1, board);

            board[row][col] = '.';
        }
    }
}

int main() {
    vector<string> board(4, string(4, '.'));

    solve(0, board);

    for (auto solution : result) {
        for (string row : solution)
            cout << row << endl;

        cout << endl;
    }

    return 0;
}