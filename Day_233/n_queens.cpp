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

            // Check column and both diagonals.
            if (columns[col] || diagonal1[d1] || diagonal2[d2])
                continue;

            // Choose a position.
            board[row][col] = 'Q';
            columns[col] = true;
            diagonal1[d1] = true;
            diagonal2[d2] = true;

            // Explore the next row.
            backtrack(row + 1, board);

            // Undo the choice.
            board[row][col] = '.';
            columns[col] = false;
            diagonal1[d1] = false;
            diagonal2[d2] = false;
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

    vector<vector<string>> result = s.solveNQueens(4);

    for (auto solution : result) {
        for (string row : solution)
            cout << row << endl;

        cout << endl;
    }

    cout << "Total solutions: " << result.size() << endl;

    return 0;
}