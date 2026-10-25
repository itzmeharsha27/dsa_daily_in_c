#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    vector<vector<int>> mat = {
        {0, 0, 0},
        {0, 1, 0},
        {1, 1, 1}
    };

    int rows = mat.size();
    int cols = mat[0].size();

    queue<pair<int, int>> q;

    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            if (mat[r][c] == 0)
                q.push({r, c});
        }
    }

    cout << "Initial zero cells: " << q.size() << '\n';

    while (!q.empty()) {
        auto [r, c] = q.front();
        q.pop();

        cout << "(" << r << ", " << c << ")\n";
    }

    return 0;
}