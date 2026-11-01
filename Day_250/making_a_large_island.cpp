#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

class Solution {
    int n;
    int directions[5] = {-1, 0, 1, 0, -1};

    int dfs(vector<vector<int>>& grid, int r, int c, int id) {
        if (r < 0 || c < 0 || r >= n || c >= n ||
            grid[r][c] != 1) {
            return 0;
        }

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

        vector<int> area(n * n + 2, 0);
        int id = 2;
        int answer = 0;
        bool hasZero = false;

        // Label each island and calculate its area.
        for (int r = 0; r < n; r++) {
            for (int c = 0; c < n; c++) {
                if (grid[r][c] == 0)
                    hasZero = true;

                if (grid[r][c] == 1) {
                    area[id] = dfs(grid, r, c, id);
                    answer = max(answer, area[id]);
                    id++;
                }
            }
        }

        // If every cell is land, the whole grid is one island.
        if (!hasZero)
            return n * n;

        // Try changing each zero into land.
        for (int r = 0; r < n; r++) {
            for (int c = 0; c < n; c++) {
                if (grid[r][c] != 0)
                    continue;

                unordered_set<int> neighbors;
                int newArea = 1;

                // Collect unique neighboring island IDs.
                for (int i = 0; i < 4; i++) {
                    int nr = r + directions[i];
                    int nc = c + directions[i + 1];

                    if (nr >= 0 && nc >= 0 &&
                        nr < n && nc < n &&
                        grid[nr][nc] > 1) {
                        neighbors.insert(grid[nr][nc]);
                    }
                }

                // Combine the flipped cell with neighboring islands.
                for (int neighborId : neighbors)
                    newArea += area[neighborId];

                answer = max(answer, newArea);
            }
        }

        return answer;
    }
};