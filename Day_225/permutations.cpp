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

    vector<int> a = {1, 2, 3};
    vector<int> b = {0, 1};

    vector<vector<int>> result1 = s.permute(a);
    print(result1);

    vector<vector<int>> result2 = s.permute(b);
    print(result2);

    return 0;
}