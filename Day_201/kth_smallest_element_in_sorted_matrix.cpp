#include <bits/stdc++.h>
using namespace std;

int countLessEqual(vector<vector<int>>& matrix, int value) {
    int count = 0;

    for (auto& row : matrix)
        count += upper_bound(row.begin(), row.end(), value) - row.begin();

    return count;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 5, 9},
        {10, 11, 13},
        {12, 13, 15}
    };

    int k = 8;

    int left = matrix[0][0];
    int right = matrix.back().back();

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (countLessEqual(matrix, mid) < k)
            left = mid + 1;
        else
            right = mid;
    }

    cout << left;

    return 0;
}