#include <vector>
using namespace std;

class Solution {
    int rows, cols;

    bool dfs(vector<vector<int>>& grid1,
             vector<vector<int>>& grid2,
             int r, int c) {

        if (r < 0 || c < 0 || r >= rows || c >= cols ||
            grid2[r][c] == 0)
            return true;

        grid2[r][c] = 0;

        bool valid = (grid1[r][c] == 1);

        valid = dfs(grid1, grid2, r - 1, c) && valid;
        valid = dfs(grid1, grid2, r + 1, c) && valid;
        valid = dfs(grid1, grid2, r, c - 1) && valid;
        valid = dfs(grid1, grid2, r, c + 1) && valid;

        return valid;
    }

public:
    int countSubIslands(vector<vector<int>>& grid1,
                        vector<vector<int>>& grid2) {
        if (grid2.empty() || grid2[0].empty())
            return 0;

        rows = grid2.size();
        cols = grid2[0].size();

        int count = 0;

        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                if (grid2[r][c] == 1) {
                    if (dfs(grid1, grid2, r, c))
                        count++;
                }
            }
        }

        return count;
    }
};