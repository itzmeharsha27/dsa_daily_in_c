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

    vector<int> a = {1, 2, 3, 1};
    vector<int> b = {1, 2, 1, 3, 5, 6, 4};
    vector<int> c = {1};

    cout << s.findPeakElement(a) << endl;
    cout << s.findPeakElement(b) << endl;
    cout << s.findPeakElement(c) << endl;

    return 0;
}