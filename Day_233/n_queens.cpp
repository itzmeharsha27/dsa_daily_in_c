#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> result;
    vector<bool> columns, diagonal1, diagonal2;

    void backtrack(int row, vector<string>& board) {
        int n = board.size();

        if (row == n) {
            result.push_back(board);
            return;
        }

        for (int col = 0; col < n; col++) {
            int d1 = row - col + n - 1;
            int d2 = row + col;

            if (columns[col] || diagonal1[d1] || diagonal2[d2])
                continue;

            board[row][col] = 'Q';
            columns[col] = diagonal1[d1] = diagonal2[d2] = true;

            backtrack(row + 1, board);

            board[row][col] = '.';
            columns[col] = diagonal1[d1] = diagonal2[d2] = false;
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        result.clear();

        columns.assign(n, false);
        diagonal1.assign(2 * n - 1, false);
        diagonal2.assign(2 * n - 1, false);

        vector<string> board(n, string(n, '.'));

        backtrack(0, board);

        return result;
    }
};

int main() {
    Solution s;

    for (int n : {1, 4}) {
        vector<vector<string>> result = s.solveNQueens(n);

        cout << "Solutions for n = " << n
             << ": " << result.size() << endl;
    }

    return 0;
}