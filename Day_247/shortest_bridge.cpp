#include <vector>
#include <queue>
#include <utility>
using namespace std;

class Solution {
private:
    void dfs(vector<vector<int>>& grid, int r, int c,
             queue<pair<int, int>>& q) {
        int n = grid.size();

        if (r < 0 || r >= n || c < 0 || c >= n ||
            grid[r][c] != 1) {
            return;
        }

        grid[r][c] = 2;
        q.push({r, c});

        dfs(grid, r - 1, c, q);
        dfs(grid, r + 1, c, q);
        dfs(grid, r, c - 1, q);
        dfs(grid, r, c + 1, q);
    }

public:
    int shortestBridge(vector<vector<int>>& grid) {
        int n = grid.size();
        queue<pair<int, int>> q;

        bool found = false;

        for (int r = 0; r < n && !found; r++) {
            for (int c = 0; c < n; c++) {
                if (grid[r][c] == 1) {
                    dfs(grid, r, c, q);
                    found = true;
                    break;
                }
            }
        }

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};
        int steps = 0;

        while (!q.empty()) {
            int size = q.size();

            for (int j = 0; j < size; j++) {
                auto [r, c] = q.front();
                q.pop();

                for (int i = 0; i < 4; i++) {
                    int nr = r + dr[i];
                    int nc = c + dc[i];

                    if (nr < 0 || nr >= n ||
                        nc < 0 || nc >= n) {
                        continue;
                    }

                    if (grid[nr][nc] == 1) {
                        return steps;
                    }

                    if (grid[nr][nc] == 0) {
                        grid[nr][nc] = 2;
                        q.push({nr, nc});
                    }
                }
            }

            steps++;
        }

        return -1;
    }
};