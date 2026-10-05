#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> result;

    void backtrack(vector<int>& nums,
                   int start,
                   vector<int>& current) {

        result.push_back(current);

        for (int i = start; i < nums.size(); i++) {
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
};

int main() {
    Solution s;

    vector<int> nums = {1, 2, 3};

    vector<vector<int>> answer = s.subsets(nums);

    for (auto subset : answer) {
        cout << "[ ";

        for (int x : subset)
            cout << x << " ";

        cout << "] ";
    }

    return 0;
}