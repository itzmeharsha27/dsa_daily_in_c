#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    vector<vector<int>> grid = {
        {0, 0, 0},
        {1, 0, 1},
        {1, 0, 0}
    };

    int n = grid.size();
    int dr[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dc[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    queue<pair<int, int>> q;
    vector<vector<bool>> visited(n, vector<bool>(n, false));

    q.push({0, 0});
    visited[0][0] = true;

    while (!q.empty()) {
        auto [r, c] = q.front();
        q.pop();

        cout << "(" << r << ", " << c << ")\n";

        for (int i = 0; i < 8; i++) {
            int nr = r + dr[i];
            int nc = c + dc[i];

            if (nr >= 0 && nr < n && nc >= 0 && nc < n &&
                grid[nr][nc] == 0 && !visited[nr][nc]) {
                visited[nr][nc] = true;
                q.push({nr, nc});
            }
        }
    }

    return 0;
}