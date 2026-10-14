#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> result;

    void backtrack(int start, int k, int remaining,
                   vector<int>& current) {
        if (current.size() == k) {
            if (remaining == 0)
                result.push_back(current);

            return;
        }

        for (int i = start; i <= 9; i++) {
            // No larger number can complete this sum.
            if (i > remaining)
                break;

            current.push_back(i);

            backtrack(i + 1, k, remaining - i, current);

            current.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        result.clear();

        if (k < 1 || k > 9 || n < 1 || n > 45)
            return result;

        vector<int> current;
        backtrack(1, k, n, current);

        return result;
    }
};

int main() {
    Solution s;

    vector<vector<int>> result = s.combinationSum3(3, 7);

    for (auto combination : result) {
        for (int x : combination)
            cout << x << " ";

        cout << endl;
    }

    return 0;
}