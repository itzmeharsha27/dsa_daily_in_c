#include <vector>
using namespace std;

class Solution {
private:
    void dfs(vector<vector<char>>& board, int r, int c) {
        int rows = board.size();
        int cols = board[0].size();

        if (r < 0 || r >= rows || c < 0 || c >= cols ||
            board[r][c] != 'O') {
            return;
        }

        board[r][c] = '#';
    }

public:
    void solve(vector<vector<char>>& board) {
        if (board.empty() || board[0].empty()) {
            return;
        }

        int rows = board.size();
        int cols = board[0].size();
    }
};