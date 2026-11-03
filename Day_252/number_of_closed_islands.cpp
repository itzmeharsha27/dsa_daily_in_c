#include <vector>
using namespace std;

class Solution {
    int rows, cols;

    int directions[5] = {-1, 0, 1, 0, -1};

    void dfs(vector<vector<int>>& grid, int r, int c) {
        if (r < 0 || c < 0 || r >= rows || c >= cols ||
            grid[r][c] == 1)
            return;

        // Mark visited land as water.
        grid[r][c] = 1;

        // Explore four directions.
        for (int i = 0; i < 4; i++) {
            dfs(grid,
                r + directions[i],
                c + directions[i + 1]);
        }
    }

public:
    int closedIsland(vector<vector<int>>& grid) {
        if (grid.empty() || grid[0].empty())
            return 0;

        rows = grid.size();
        cols = grid[0].size();

        // Step 1: Remove islands connected to left and right.
        for (int r = 0; r < rows; r++) {
            dfs(grid, r, 0);
            dfs(grid, r, cols - 1);
        }

        // Step 2: Remove islands connected to top and bottom.
        for (int c = 0; c < cols; c++) {
            dfs(grid, 0, c);
            dfs(grid, rows - 1, c);
        }

        // Step 3: Count remaining closed islands.
        int count = 0;

        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                if (grid[r][c] == 0) {
                    count++;
                    dfs(grid, r, c);
                }
            }
        }

        return count;
    }
};