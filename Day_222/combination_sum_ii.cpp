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

void print(vector<vector<int>>& result) {
    for (auto combination : result) {
        cout << "[ ";
        for (int x : combination)
            cout << x << " ";
        cout << "] ";
    }
    cout << endl;
}

int main() {
    Solution s;

    vector<int> a = {10, 1, 2, 7, 6, 1, 5};
    vector<int> b = {2, 5, 2, 1, 2};

    vector<vector<int>> result1 = s.combinationSum2(a, 8);
    print(result1);

    vector<vector<int>> result2 = s.combinationSum2(b, 5);
    print(result2);

    return 0;
}