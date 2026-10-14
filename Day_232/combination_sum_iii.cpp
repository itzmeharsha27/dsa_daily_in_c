#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> combinationSum3(int k, int n) {
    vector<vector<int>> result;
    vector<int> current;

    function<void(int, int)> backtrack =
        [&](int start, int remaining) {
            if (current.size() == k) {
                if (remaining == 0)
                    result.push_back(current);

                return;
            }

            for (int i = start; i <= 9; i++) {
                if (i > remaining)
                    break;

                current.push_back(i);
                backtrack(i + 1, remaining - i);
                current.pop_back();
            }
        };

    backtrack(1, n);

    return result;
}

int main() {
    vector<vector<int>> answer = combinationSum3(3, 7);

    for (auto combination : answer) {
        for (int x : combination)
            cout << x << " ";

        cout << endl;
    }

    return 0;
}