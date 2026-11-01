#include <vector>
using namespace std;

class Solution {
    int n;
    int directions[5] = {-1, 0, 1, 0, -1};

    int dfs(vector<vector<int>>& grid, int r, int c, int id) {
        if (r < 0 || c < 0 || r >= n || c >= n ||
            grid[r][c] != 1)
            return 0;

        grid[r][c] = id;
        int area = 1;

        for (int i = 0; i < 4; i++) {
            area += dfs(grid,
                        r + directions[i],
                        c + directions[i + 1],
                        id);
        }

        return area;
    }

public:
    int largestIsland(vector<vector<int>>& grid) {
        n = grid.size();
        int id = 2;

        for (int r = 0; r < n; r++) {
            for (int c = 0; c < n; c++) {
                if (grid[r][c] == 1) {
                    dfs(grid, r, c, id);
                    id++;
                }
            }
        }

        return 0;
    }
};