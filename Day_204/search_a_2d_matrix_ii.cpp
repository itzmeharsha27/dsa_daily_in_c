#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> matrix = {
        {1,  4,  7, 11, 15},
        {2,  5,  8, 12, 19},
        {3,  6,  9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };

    int target = 5;

    int row = 0;
    int col = matrix[0].size() - 1;

    while (row < matrix.size() && col >= 0) {

        if (matrix[row][col] == target) {
            cout << "Found";
            return 0;
        }

        if (matrix[row][col] > target)
            col--;
        else
            row++;
    }

    cout << "Not Found";

    return 0;
}