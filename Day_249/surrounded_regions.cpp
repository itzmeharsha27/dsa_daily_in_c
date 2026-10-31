#include <vector>
using namespace std;

class Solution {
private:
    void dfs(vector<vector<char>>& board, int r, int c) {
        int rows = board.size();
        int cols = board[0].size();

        if (r < 0 || r >= rows ||
            c < 0 || c >= cols ||
            board[r][c] != 'O') {
            return;
        }

        board[r][c] = '#';

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        for (int i = 0; i < 4; i++) {
            dfs(board, r + dr[i], c + dc[i]);
        }
    }

public:
    void solve(vector<vector<char>>& board) {
        if (board.empty() || board[0].empty()) {
            return;
        }

        int rows = board.size();
        int cols = board[0].size();

        // Mark safe regions connected to the left and right borders.
        for (int r = 0; r < rows; r++) {
            dfs(board, r, 0);

            if (cols > 1) {
                dfs(board, r, cols - 1);
            }
        }

        // Mark safe regions connected to the top and bottom borders.
        for (int c = 1; c < cols - 1; c++) {
            dfs(board, 0, c);

            if (rows > 1) {
                dfs(board, rows - 1, c);
            }
        }

        // Capture surrounded regions and restore safe regions.
        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                if (board[r][c] == 'O') {
                    board[r][c] = 'X';
                } else if (board[r][c] == '#') {
                    board[r][c] = 'O';
                }
            }
        }
    }
};