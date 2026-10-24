#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
using namespace std;

class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();

        if (grid[0][0] != 0 || grid[n - 1][n - 1] != 0)
            return -1;

        int dr[] = {-1, -1, -1, 0, 0, 1, 1, 1};
        int dc[] = {-1, 0, 1, -1, 1, -1, 0, 1};

        queue<tuple<int, int, int>> q;
        q.push({0, 0, 1});
        grid[0][0] = 1;

        while (!q.empty()) {
            auto [r, c, length] = q.front();
            q.pop();

            if (r == n - 1 && c == n - 1)
                return length;

            for (int i = 0; i < 8; i++) {
                int nr = r + dr[i];
                int nc = c + dc[i];

                if (nr >= 0 && nr < n && nc >= 0 && nc < n &&
                    grid[nr][nc] == 0) {
                    grid[nr][nc] = 1;
                    q.push({nr, nc, length + 1});
                }
            }
        }

        return -1;
    }
};

int main() {
    vector<vector<int>> grid = {
        {0, 1},
        {1, 0}
    };

    Solution solution;
    cout << solution.shortestPathBinaryMatrix(grid) << '\n';

    return 0;
}