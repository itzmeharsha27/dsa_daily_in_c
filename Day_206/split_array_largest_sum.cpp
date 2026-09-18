#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canSplit(vector<int>& nums, int k, int limit) {
        int sum = 0;
        int parts = 1;

        for (int x : nums) {
            if (sum + x > limit) {
                parts++;
                sum = 0;
            }

            sum += x;
        }

        return parts <= k;
    }

    int splitArray(vector<int>& nums, int k) {
        int left = *max_element(nums.begin(), nums.end());
        int right = accumulate(nums.begin(), nums.end(), 0);

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (canSplit(nums, k, mid))
                right = mid - 1;
            else
                left = mid + 1;
        }

        return left;
    }
};

int main() {
    Solution s;

    vector<int> nums = {7,2,5,10,8};

    cout << s.splitArray(nums, 2) << endl;

    return 0;
}