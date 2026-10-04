#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> result;

    void backtrack(vector<int>& candidates,
                   int start,
                   int target,
                   vector<int>& current) {

        if (target == 0) {
            result.push_back(current);
            return;
        }

        for (int i = start; i < candidates.size(); i++) {

            if (i > start && candidates[i] == candidates[i - 1])
                continue;

            if (candidates[i] > target)
                break;

            current.push_back(candidates[i]);

            backtrack(candidates,
                      i + 1,
                      target - candidates[i],
                      current);

            current.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(
        vector<int>& candidates,
        int target) {

        result.clear();

        sort(candidates.begin(), candidates.end());

        vector<int> current;

        backtrack(candidates, 0, target, current);

        return result;
    }
};

int main() {
    Solution s;

    vector<int> candidates = {10, 1, 2, 7, 6, 1, 5};

    vector<vector<int>> answer =
        s.combinationSum2(candidates, 8);

    for (auto combination : answer) {
        for (int x : combination)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}