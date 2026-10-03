#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> result;

    void backtrack(vector<int>& candidates, int start,
                   int target, vector<int>& current) {

        if (target == 0) {
            result.push_back(current);
            return;
        }

        for (int i = start; i < candidates.size(); i++) {
            if (candidates[i] > target)
                continue;

            current.push_back(candidates[i]);

            backtrack(candidates, i,
                      target - candidates[i], current);

            current.pop_back();
        }
    }

    vector<vector<int>> combinationSum(
        vector<int>& candidates, int target) {

        result.clear();

        vector<int> current;
        backtrack(candidates, 0, target, current);

        return result;
    }
};

int main() {
    Solution s;

    vector<int> candidates = {2, 3, 6, 7};

    vector<vector<int>> result =
        s.combinationSum(candidates, 7);

    for (auto combination : result) {
        for (int x : combination)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}