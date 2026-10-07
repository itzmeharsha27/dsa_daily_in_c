#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> result;

void backtrack(vector<int>& nums,
               vector<bool>& used,
               vector<int>& current) {

    if (current.size() == nums.size()) {
        result.push_back(current);
        return;
    }

    for (int i = 0; i < nums.size(); i++) {
        if (used[i])
            continue;

        used[i] = true;
        current.push_back(nums[i]);

        backtrack(nums, used, current);

        current.pop_back();
        used[i] = false;
    }
}

int main() {
    vector<int> nums = {1, 2, 3};

    vector<bool> used(nums.size(), false);
    vector<int> current;

    backtrack(nums, used, current);

    for (auto permutation : result) {
        for (int x : permutation)
            cout << x << " ";

        cout << endl;
    }

    return 0;
}