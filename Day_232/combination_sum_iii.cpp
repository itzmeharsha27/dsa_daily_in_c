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
            if (i > remaining)
                break;

            current.push_back(i);
            backtrack(i + 1, k, remaining - i, current);
            current.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        result.clear();

        vector<int> current;
        backtrack(1, k, n, current);

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

    vector<vector<int>> first = s.combinationSum3(3, 7);
    print(first);

    vector<vector<int>> second = s.combinationSum3(3, 9);
    print(second);

    vector<vector<int>> third = s.combinationSum3(4, 1);
    print(third);

    return 0;
}