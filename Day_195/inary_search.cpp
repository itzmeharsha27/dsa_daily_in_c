#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {

        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {

            int mid = left + (right - left) / 2;

            if (nums[mid] == target)
                return mid;

            if (nums[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }

        return -1;
    }
};

int main() {
    Solution s;

    vector<int> nums = {2, 4, 6, 8, 10};

    cout << "Target 2: " << s.search(nums, 2) << endl;
    cout << "Target 10: " << s.search(nums, 10) << endl;
    cout << "Target 5: " << s.search(nums, 5) << endl;

    return 0;
}