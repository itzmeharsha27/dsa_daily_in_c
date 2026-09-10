#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == target) {
            cout << i;
            return 0;
        }
    }

    cout << -1;

    return 0;
}