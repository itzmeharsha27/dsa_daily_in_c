#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> result;

void backtrack(vector<int>& nums,
               int index,
               vector<int>& current) {

    result.push_back(current);

    if (index == nums.size())
        return;

    for (int i = index; i < nums.size(); i++) {
        current.push_back(nums[i]);

        backtrack(nums, i + 1, current);

        current.pop_back();
    }
}

vector<vector<int>> subsets(vector<int>& nums) {
    result.clear();

    vector<int> current;

    backtrack(nums, 0, current);

    return result;
}

int main() {
    vector<int> nums = {1, 2, 3};

    vector<vector<int>> answer = subsets(nums);

    for (auto subset : answer) {
        cout << "[ ";

        for (int x : subset)
            cout << x << " ";

        cout << "] ";
    }

    return 0;
}