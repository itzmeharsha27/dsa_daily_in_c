#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
    int rows = mat.size();
    int cols = mat[0].size();

    vector<vector<int>> dist(rows, vector<int>(cols, -1));
    queue<pair<int, int>> q;

    int dr[] = {-1, 1, 0, 0};
    int dc[] = {0, 0, -1, 1};

    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            if (mat[r][c] == 0) {
                dist[r][c] = 0;
                q.push({r, c});
            }
        }
    }

    while (!q.empty()) {
        auto [r, c] = q.front();
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nr = r + dr[i];
            int nc = c + dc[i];

            if (nr < 0 || nr >= rows ||
                nc < 0 || nc >= cols)
                continue;

            if (dist[nr][nc] != -1)
                continue;

            dist[nr][nc] = dist[r][c] + 1;
            q.push({nr, nc});
        }
    }

    return dist;
}

int main() {
    vector<vector<int>> mat = {
        {0, 0, 0},
        {0, 1, 0},
        {1, 1, 1}
    };

    vector<vector<int>> result = updateMatrix(mat);

    for (const auto& row : result) {
        for (int value : row)
            cout << value << ' ';
        cout << '\n';
    }

    return 0;
}