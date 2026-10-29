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

        for (int r = 0; r < n; r++) {
            for (int c = 0; c < n; c++) {
                if (grid[r][c] == 1) {
                    dfs(grid, r, c, q);
                    r = n;
                    break;
                }
            }
        }

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        return 0;
    }
};