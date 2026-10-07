#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> result;

void generate(vector<int>& nums, int start) {
    if (start == nums.size()) {
        result.push_back(nums);
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

    for (auto permutation : result) {
        for (int x : permutation)
            cout << x << " ";

        cout << endl;
    }

    return 0;
}