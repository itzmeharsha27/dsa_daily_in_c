#include <vector>
using namespace std;

class Solution {
    int n;
    int directions[5] = {-1, 0, 1, 0, -1};

    int dfs(vector<vector<int>>& grid, int r, int c) {
        if (r < 0 || c < 0 || r >= n || c >= n ||
            grid[r][c] != 1)
            return 0;

        grid[r][c] = 0;
        int area = 1;

        for (int i = 0; i < 4; i++) {
            area += dfs(grid,
                        r + directions[i],
                        c + directions[i + 1]);
        }

        return area;
    }

public:
    int largestIsland(vector<vector<int>>& grid) {
        n = grid.size();
        return 0;
    }
};