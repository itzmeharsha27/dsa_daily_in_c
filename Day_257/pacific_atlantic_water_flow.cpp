#include <vector>
using namespace std;

class Solution {
    int rows, cols;
    int directions[5] = {-1, 0, 1, 0, -1};

    void dfs(vector<vector<int>>& heights,
             vector<vector<bool>>& visited,
             int r, int c) {
        if (visited[r][c])
            return;

        visited[r][c] = true;

        for (int i = 0; i < 4; i++) {
            int nr = r + directions[i];
            int nc = c + directions[i + 1];

            if (nr < 0 || nc < 0 || nr >= rows || nc >= cols)
                continue;

            if (heights[nr][nc] >= heights[r][c]) {
                dfs(heights, visited, nr, nc);
            }
        }
    }

public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        if (heights.empty() || heights[0].empty())
            return {};

        rows = heights.size();
        cols = heights[0].size();

        return {};
    }
};