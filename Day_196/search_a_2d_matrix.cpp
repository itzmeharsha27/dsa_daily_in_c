#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int row = -1;

        for (int i = 0; i < matrix.size(); i++) {
            if (target >= matrix[i][0] &&
                target <= matrix[i].back()) {
                row = i;
                break;
            }
        }

        if (row == -1)
            return false;

        int left = 0;
        int right = matrix[row].size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (matrix[row][mid] == target)
                return true;

            if (matrix[row][mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }

        return false;
    }
};

int main() {
    Solution s;

    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    cout << s.searchMatrix(matrix, 16);

    return 0;
}