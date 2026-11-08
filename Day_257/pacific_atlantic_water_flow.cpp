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

        vector<vector<bool>> pacific(rows, vector<bool>(cols, false));
        vector<vector<bool>> atlantic(rows, vector<bool>(cols, false));

        // Pacific: top + left
        for (int c = 0; c < cols; c++) {
            dfs(heights, pacific, 0, c);
        }

        for (int r = 0; r < rows; r++) {
            dfs(heights, pacific, r, 0);
        }

        // Atlantic: bottom + right
        for (int c = 0; c < cols; c++) {
            dfs(heights, atlantic, rows - 1, c);
        }

        for (int r = 0; r < rows; r++) {
            dfs(heights, atlantic, r, cols - 1);
        }

        // Common cells
        vector<vector<int>> answer;

        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                if (pacific[r][c] && atlantic[r][c]) {
                    answer.push_back({r, c});
                }
            }
        }

        return answer;
    }
};