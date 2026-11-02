#include <vector>
using namespace std;

class Solution {
    int rows, cols;
    int directions[5] = {-1, 0, 1, 0, -1};

    void dfs(vector<vector<int>>& grid, int r, int c) {
        if (r < 0 || c < 0 || r >= rows || c >= cols ||
            grid[r][c] == 0)
            return;

        grid[r][c] = 0;

        for (int i = 0; i < 4; i++) {
            dfs(grid, r + directions[i],
                c + directions[i + 1]);
        }
    }

public:
    int numEnclaves(vector<vector<int>>& grid) {
        rows = grid.size();
        cols = grid[0].size();

        for (int r = 0; r < rows; r++) {
            dfs(grid, r, 0);
            dfs(grid, r, cols - 1);
        }

        return 0;
    }
};