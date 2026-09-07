#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {-1, 0, 3, 5, 9, 12};

    int left = 0;
    int right = nums.size() - 1;

    int mid = left + (right - left) / 2;

    cout << nums[mid];

    return 0;
}