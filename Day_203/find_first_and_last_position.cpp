#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int first = -1;
        int last = -1;

        int left = 0;
        int right = nums.size() - 1;

        // Find first occurrence
        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] >= target) {
                if (nums[mid] == target)
                    first = mid;

                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }

        // Find last occurrence
        left = 0;
        right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] <= target) {
                if (nums[mid] == target)
                    last = mid;

                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }

        return {first, last};
    }
};

int main() {
    Solution s;

    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    vector<int> answer = s.searchRange(nums, target);

    cout << answer[0] << " " << answer[1] << endl;

    return 0;
}