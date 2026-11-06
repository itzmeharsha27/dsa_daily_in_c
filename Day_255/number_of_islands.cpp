#include <vector>
using namespace std;

class Solution {
    int rows, cols;

    void dfs(vector<vector<char>>& grid, int r, int c) {
        if (r < 0 || c < 0 || r >= rows || c >= cols)
            return;

        if (grid[r][c] == '0')
            return;
    }

public:
    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty() || grid[0].empty())
            return 0;

        rows = grid.size();
        cols = grid[0].size();

        return 0;
    }
};