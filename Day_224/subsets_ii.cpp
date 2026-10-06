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
};

void print(vector<vector<int>>& result) {
    for (auto subset : result) {
        cout << "[ ";

        for (int x : subset)
            cout << x << " ";

        cout << "] ";
    }

    cout << endl;
}

int main() {
    Solution s;

    vector<int> a = {1, 2, 2};
    vector<int> b = {0};

    vector<vector<int>> result1 =
        s.subsetsWithDup(a);

    print(result1);

    vector<vector<int>> result2 =
        s.subsetsWithDup(b);

    print(result2);

    return 0;
}