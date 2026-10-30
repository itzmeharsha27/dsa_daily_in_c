#include <vector>
using namespace std;

class Solution {
private:
    void dfs(vector<vector<int>>& heights,
             vector<vector<bool>>& visited,
             int r, int c) {
        int rows = heights.size();
        int cols = heights[0].size();

        visited[r][c] = true;

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        for (int i = 0; i < 4; i++) {
            int nr = r + dr[i];
            int nc = c + dc[i];

            if (nr >= 0 && nr < rows &&
                nc >= 0 && nc < cols &&
                !visited[nr][nc] &&
                heights[nr][nc] >= heights[r][c]) {

                dfs(heights, visited, nr, nc);
            }
        }
    }

public:
    vector<vector<int>> pacificAtlantic(
        vector<vector<int>>& heights) {
        if (heights.empty() || heights[0].empty()) {
            return {};
        }

        int rows = heights.size();
        int cols = heights[0].size();

        vector<vector<bool>> pacific(
            rows, vector<bool>(cols, false));

        vector<vector<bool>> atlantic(
            rows, vector<bool>(cols, false));

        for (int c = 0; c < cols; c++) {
            dfs(heights, pacific, 0, c);
            dfs(heights, atlantic, rows - 1, c);
        }

        for (int r = 0; r < rows; r++) {
            dfs(heights, pacific, r, 0);
            dfs(heights, atlantic, r, cols - 1);
        }

        return {};
    }
};