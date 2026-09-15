#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            cout << "Found at: " << mid;
            break;
        }
        else if (nums[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return 0;
}