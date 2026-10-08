#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
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

            // Skip the same value at the same recursion level.
            if (i > 0 &&
                nums[i] == nums[i - 1] &&
                !used[i - 1])
                continue;

            // Choose
            used[i] = true;
            current.push_back(nums[i]);

            // Explore
            backtrack(nums, used, current);

            // Undo
            current.pop_back();
            used[i] = false;
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        result.clear();

        sort(nums.begin(), nums.end());

        vector<bool> used(nums.size(), false);
        vector<int> current;

        backtrack(nums, used, current);

        return result;
    }
};

int main() {
    Solution s;

    vector<int> nums = {1, 1, 2};

    vector<vector<int>> result =
        s.permuteUnique(nums);

    for (auto permutation : result) {
        for (int x : permutation)
            cout << x << " ";

        cout << endl;
    }

    return 0;
}