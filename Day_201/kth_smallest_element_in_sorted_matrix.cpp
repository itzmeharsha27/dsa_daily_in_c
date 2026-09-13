#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {

        int n = matrix.size();

        int left = matrix[0][0];
        int right = matrix[n - 1][n - 1];

        while (left < right) {

            int mid = left + (right - left) / 2;

            int count = 0;

            for (auto& row : matrix) {
                count += upper_bound(
                    row.begin(),
                    row.end(),
                    mid
                ) - row.begin();
            }

            if (count < k)
                left = mid + 1;
            else
                right = mid;
        }

        return left;
    }
};

int main() {
    Solution s;

    vector<vector<int>> matrix = {
        {1, 5, 9},
        {10, 11, 13},
        {12, 13, 15}
    };

    int k = 8;

    cout << s.kthSmallest(matrix, k) << endl;

    return 0;
}