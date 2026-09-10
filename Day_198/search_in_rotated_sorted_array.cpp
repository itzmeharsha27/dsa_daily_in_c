#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};

    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[left] <= nums[mid]) {
            cout << "Left half is sorted\n";
            break;
        }
        else {
            cout << "Right half is sorted\n";
            break;
        }
    }

    return 0;
}