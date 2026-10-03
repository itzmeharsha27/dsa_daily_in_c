#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> result;

void backtrack(vector<int>& candidates, int index,
               int remaining, vector<int>& current) {

    if (remaining == 0) {
        result.push_back(current);
        return;
    }

    if (remaining < 0 || index == candidates.size())
        return;

    current.push_back(candidates[index]);

    backtrack(candidates, index,
              remaining - candidates[index], current);

    current.pop_back();

    backtrack(candidates, index + 1,
              remaining, current);
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    result.clear();

    vector<int> current;
    backtrack(candidates, 0, target, current);

    return result;
}

int main() {
    vector<int> candidates = {2, 3, 6, 7};

    vector<vector<int>> answer = combinationSum(candidates, 7);

    for (auto combination : answer) {
        for (int x : combination)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}