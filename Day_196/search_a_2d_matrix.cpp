#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    int target = 16;
    int row = -1;

    for (int i = 0; i < matrix.size(); i++) {
        if (target >= matrix[i][0] &&
            target <= matrix[i].back()) {
            row = i;
            break;
        }
    }

    cout << "Row: " << row;

    return 0;
}