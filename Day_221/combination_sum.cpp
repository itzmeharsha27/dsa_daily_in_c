#include <bits/stdc++.h>
using namespace std;

vector<int> candidates = {2, 3, 6, 7};
int target = 7;
vector<vector<int>> result;

void backtrack(int index, int remaining, vector<int>& current) {
    if (remaining == 0) {
        result.push_back(current);
        return;
    }

    if (remaining < 0 || index == candidates.size())
        return;

    current.push_back(candidates[index]);

    // Use the same number again.
    backtrack(index, remaining - candidates[index], current);

    current.pop_back();

    // Move to the next number.
    backtrack(index + 1, remaining, current);
}

int main() {
    vector<int> current;

    backtrack(0, target, current);

    for (auto combination : result) {
        for (int x : combination)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}