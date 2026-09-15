#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int first = -1;
        int last = -1;

        int left = 0;
        int right = nums.size() - 1;

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

    vector<int> a = {5, 7, 7, 8, 8, 10};
    vector<int> b = {1};
    vector<int> c = {2, 2, 2, 2};

    for (int x : s.searchRange(a, 8))
        cout << x << " ";
    cout << endl;

    for (int x : s.searchRange(b, 1))
        cout << x << " ";
    cout << endl;

    for (int x : s.searchRange(c, 3))
        cout << x << " ";

    return 0;
}