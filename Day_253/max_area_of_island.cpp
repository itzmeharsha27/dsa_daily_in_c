#include <vector>
using namespace std;

class Solution {
    int rows, cols;

    int dfs(vector<vector<int>>& grid, int r, int c) {
        if (r < 0 || c < 0 || r >= rows || c >= cols)
            return 0;

        if (grid[r][c] == 0)
            return 0;

        return 0;
    }

public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        rows = grid.size();
        cols = grid[0].size();

        return 0;
    }
};