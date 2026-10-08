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

            if (i > 0 && nums[i] == nums[i - 1] && !used[i - 1])
                continue;

            used[i] = true;
            current.push_back(nums[i]);

            backtrack(nums, used, current);

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

void print(vector<vector<int>>& result) {
    for (auto permutation : result) {
        cout << "[ ";

        for (int x : permutation)
            cout << x << " ";

        cout << "] ";
    }

    cout << endl;
}

int main() {
    Solution s;

    vector<int> a = {1, 1, 2};
    vector<int> b = {1, 2, 2};

    vector<vector<int>> result1 =
        s.permuteUnique(a);

    print(result1);

    vector<vector<int>> result2 =
        s.permuteUnique(b);

    print(result2);

    return 0;
}