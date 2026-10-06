#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> result;

void backtrack(vector<int>& nums,
               int start,
               vector<int>& current) {

    result.push_back(current);

    for (int i = start; i < nums.size(); i++) {

        if (i > start && nums[i] == nums[i - 1])
            continue;

        current.push_back(nums[i]);

        backtrack(nums, i + 1, current);

        current.pop_back();
    }
}

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    result.clear();

    sort(nums.begin(), nums.end());

    vector<int> current;

    backtrack(nums, 0, current);

    return result;
}

int main() {
    vector<int> nums = {1, 2, 2};

    vector<vector<int>> answer = subsetsWithDup(nums);

    for (auto subset : answer) {
        cout << "[ ";

        for (int x : subset)
            cout << x << " ";

        cout << "] ";
    }

    return 0;
}