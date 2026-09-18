#include <bits/stdc++.h>
using namespace std;

bool canSplit(vector<int>& nums, int k, int limit) {
    int sum = 0;
    int parts = 1;

    for (int x : nums) {
        if (sum + x > limit) {
            parts++;
            sum = 0;
        }

        sum += x;
    }

    return parts <= k;
}

int main() {
    vector<int> nums = {7,2,5,10,8};
    int k = 2;

    int left = *max_element(nums.begin(), nums.end());
    int right = accumulate(nums.begin(), nums.end(), 0);

    for (int limit = left; limit <= right; limit++) {
        if (canSplit(nums, k, limit)) {
            cout << "Answer: " << limit << endl;
            break;
        }
    }

    return 0;
}