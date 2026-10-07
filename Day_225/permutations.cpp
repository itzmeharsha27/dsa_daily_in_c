#include <bits/stdc++.h>
using namespace std;

void generate(vector<int>& nums, int start) {
    if (start == nums.size()) {
        for (int x : nums)
            cout << x << " ";

        cout << endl;
        return;
    }

    for (int i = start; i < nums.size(); i++) {
        swap(nums[start], nums[i]);

        generate(nums, start + 1);

        swap(nums[start], nums[i]);
    }
}

int main() {
    vector<int> nums = {1, 2, 3};

    generate(nums, 0);

    return 0;
}