#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {

            int mid = left + (right - left) / 2;

            if (nums[mid] < nums[mid + 1])
                left = mid + 1;
            else
                right = mid;
        }

        return left;
    }
};

int main() {
    Solution s;

    vector<int> nums = {1, 2, 3, 4, 5, 6};

    cout << s.findPeakElement(nums);

    return 0;
}