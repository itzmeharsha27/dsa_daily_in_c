#include <vector>
using namespace std;

class Solution {
    int rows, cols;

    void dfs(vector<vector<char>>& board, int r, int c) {
        if (r < 0 || c < 0 || r >= rows || c >= cols)
            return;

        if (board[r][c] != 'O')
            return;
    }

public:
    void solve(vector<vector<char>>& board) {
        if (board.empty() || board[0].empty())
            return;

        rows = board.size();
        cols = board[0].size();
    }
};