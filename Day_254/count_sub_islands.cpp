#include <vector>
using namespace std;

class Solution {
    int rows, cols;

    void dfs(vector<vector<int>>& grid2, int r, int c) {
        if (r < 0 || c < 0 || r >= rows || c >= cols)
            return;

        if (grid2[r][c] == 0)
            return;
    }

public:
    int countSubIslands(vector<vector<int>>& grid1,
                        vector<vector<int>>& grid2) {
        rows = grid2.size();
        cols = grid2[0].size();

        return 0;
    }
};