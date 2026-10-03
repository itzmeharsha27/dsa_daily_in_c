#include <bits/stdc++.h>
using namespace std;

vector<int> candidates = {2, 3, 6, 7};
int target = 7;
vector<vector<int>> result;

void generate(int index, int sum, vector<int>& current) {
    if (sum == target) {
        result.push_back(current);
        return;
    }

    if (sum > target || index == candidates.size())
        return;

    current.push_back(candidates[index]);
    generate(index, sum + candidates[index], current);

    current.pop_back();
    generate(index + 1, sum, current);
}

int main() {
    vector<int> current;

    generate(0, 0, current);

    for (auto combination : result) {
        for (int x : combination)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}