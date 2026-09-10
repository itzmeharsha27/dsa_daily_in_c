#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        cout << "Mid: " << nums[mid] << endl;
        break;
    }

    return 0;
}