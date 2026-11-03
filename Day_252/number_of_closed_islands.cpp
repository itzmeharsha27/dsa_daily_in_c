#include <vector>
using namespace std;

class Solution {
    int rows, cols;

    void dfs(vector<vector<int>>& grid, int r, int c) {
        if (r < 0 || c < 0 || r >= rows || c >= cols)
            return;

        if (grid[r][c] == 1)
            return;
    }

public:
    int closedIsland(vector<vector<int>>& grid) {
        rows = grid.size();
        cols = grid[0].size();

        return 0;
    }
};