#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    int target = 16;
    int row = 1;

    int left = 0;
    int right = matrix[row].size() - 1;

    bool found = false;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (matrix[row][mid] == target) {
            found = true;
            break;
        }

        if (matrix[row][mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    cout << found;

    return 0;
}