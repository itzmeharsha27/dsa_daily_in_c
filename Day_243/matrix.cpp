#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> mat = {
        {0, 0, 0},
        {0, 1, 0},
        {1, 1, 1}
    };

    int rows = mat.size();
    int cols = mat[0].size();

    vector<vector<int>> dist(rows, vector<int>(cols, -1));

    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            if (mat[r][c] == 0)
                dist[r][c] = 0;
        }
    }

    for (const auto& row : dist) {
        for (int value : row)
            cout << value << ' ';
        cout << '\n';
    }

    return 0;
}