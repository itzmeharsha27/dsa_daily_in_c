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

vector<vector<int>> permute(vector<int>& nums) {
    result.clear();

    vector<bool> used(nums.size(), false);
    vector<int> current;

    backtrack(nums, used, current);

    return result;
}

int main() {
    vector<int> nums = {1, 2, 3};

    vector<vector<int>> answer = permute(nums);

    for (auto permutation : answer) {
        for (int x : permutation)
            cout << x << " ";

        cout << endl;
    }

    return 0;
}