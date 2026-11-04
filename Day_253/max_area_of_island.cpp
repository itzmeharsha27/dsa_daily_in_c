#include <vector>
#include <algorithm>
using namespace std;

class Solution {
    int rows, cols;

    int directions[5] = {-1, 0, 1, 0, -1};

    int dfs(vector<vector<int>>& grid, int r, int c) {
        if (r < 0 || c < 0 || r >= rows || c >= cols ||
            grid[r][c] == 0)
            return 0;

        // Mark the current cell as visited.
        grid[r][c] = 0;

        int area = 1;

        // Explore all four directions.
        for (int i = 0; i < 4; i++) {
            area += dfs(grid,
                        r + directions[i],
                        c + directions[i + 1]);
        }

        return area;
    }

public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        if (grid.empty() || grid[0].empty())
            return 0;

        rows = grid.size();
        cols = grid[0].size();

        int maximum = 0;

        // Visit every cell in the grid.
        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {

                if (grid[r][c] == 1) {
                    int area = dfs(grid, r, c);
                    maximum = max(maximum, area);
                }
            }
        }

        return maximum;
    }
};