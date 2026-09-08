#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int rows = matrix.size();
        int cols = matrix[0].size();

        int left = 0;
        int right = rows * cols - 1;

        while (left <= right) {

            int mid = left + (right - left) / 2;
            int value = matrix[mid / cols][mid % cols];

            if (value == target)
                return true;

            if (value < target)
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

    cout << boolalpha;
    cout << s.searchMatrix(matrix, 13) << endl;

    return 0;
}