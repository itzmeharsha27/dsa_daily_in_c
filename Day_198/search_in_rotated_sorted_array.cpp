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

            if (nums[left] <= nums[mid]) {

                if (nums[left] <= target && target < nums[mid])
                    right = mid - 1;
                else
                    left = mid + 1;

            } else {

                if (nums[mid] < target && target <= nums[right])
                    left = mid + 1;
                else
                    right = mid - 1;
            }
        }

        return -1;
    }
};

int main() {
    Solution s;

    vector<int> a = {4, 5, 6, 7, 0, 1, 2};
    vector<int> b = {6, 7, 1, 2, 3, 4, 5};
    vector<int> c = {1};

    cout << s.search(a, 0) << endl;
    cout << s.search(b, 3) << endl;
    cout << s.search(c, 1) << endl;

    return 0;
}