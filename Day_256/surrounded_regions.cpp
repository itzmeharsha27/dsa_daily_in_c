#include <vector>
using namespace std;

class Solution {
    int rows, cols;
    int directions[5] = {-1, 0, 1, 0, -1};

    void dfs(vector<vector<char>>& board, int r, int c) {
        if (r < 0 || c < 0 || r >= rows || c >= cols ||
            board[r][c] != 'O')
            return;

        board[r][c] = '#';

        for (int i = 0; i < 4; i++) {
            dfs(board,
                r + directions[i],
                c + directions[i + 1]);
        }
    }

public:
    void solve(vector<vector<char>>& board) {
        if (board.empty() || board[0].empty())
            return;

        rows = board.size();
        cols = board[0].size();

        for (int r = 0; r < rows; r++) {
            dfs(board, r, 0);
            dfs(board, r, cols - 1);
        }

        for (int c = 0; c < cols; c++) {
            dfs(board, 0, c);
            dfs(board, rows - 1, c);
        }

        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                if (board[r][c] == 'O')
                    board[r][c] = 'X';
                else if (board[r][c] == '#')
                    board[r][c] = 'O';
            }
        }
    }
};