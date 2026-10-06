#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> result;

    void backtrack(vector<int>& nums,
                   int start,
                   vector<int>& current) {

        // Every current state is a valid subset.
        result.push_back(current);

        for (int i = start; i < nums.size(); i++) {

            // Skip duplicate choices at the same level.
            if (i > start && nums[i] == nums[i - 1])
                continue;

            // Choose
            current.push_back(nums[i]);

            // Explore
            backtrack(nums, i + 1, current);

            // Undo choice
            current.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        result.clear();

        // Sorting places duplicates together.
        sort(nums.begin(), nums.end());

        vector<int> current;

        backtrack(nums, 0, current);

        return result;
    }
};

int main() {
    Solution s;

    vector<int> nums = {1, 2, 2};

    vector<vector<int>> result =
        s.subsetsWithDup(nums);

    for (auto subset : result) {
        cout << "[ ";

        for (int x : subset)
            cout << x << " ";

        cout << "] ";
    }

    return 0;
}