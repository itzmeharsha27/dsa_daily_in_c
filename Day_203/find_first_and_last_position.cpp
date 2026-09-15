#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    int first = -1;
    int last = -1;

    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            first = mid;
            right = mid - 1;
        }
        else if (nums[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    left = 0;
    right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            last = mid;
            left = mid + 1;
        }
        else if (nums[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    cout << first << " " << last;

    return 0;
}