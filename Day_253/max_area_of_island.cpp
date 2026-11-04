#include <vector>
using namespace std;

class Solution {
    int rows, cols;

public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        if (grid.empty() || grid[0].empty())
            return 0;

        rows = grid.size();
        cols = grid[0].size();

        return 0;
    }
};