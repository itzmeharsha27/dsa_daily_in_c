#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 2;

    int left = 0;
    int right = nums.size() - 1;
    int answer = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            answer = mid;
            break;
        }
        else if (nums[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    cout << answer;

    return 0;
}