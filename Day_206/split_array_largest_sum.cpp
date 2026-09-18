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

    cout << canSplit(nums, 2, 18) << endl;

    return 0;
}