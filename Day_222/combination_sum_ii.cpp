#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> result;

void generate(vector<int>& candidates,
              int start,
              int remaining,
              vector<int>& current) {

    if (remaining == 0) {
        result.push_back(current);
        return;
    }

    if (remaining < 0)
        return;

    for (int i = start; i < candidates.size(); i++) {
        current.push_back(candidates[i]);

        generate(candidates,
                 i + 1,
                 remaining - candidates[i],
                 current);

        current.pop_back();
    }
}

int main() {
    vector<int> candidates = {1, 1, 2, 5, 6, 7, 10};
    vector<int> current;

    generate(candidates, 0, 8, current);

    for (auto combination : result) {
        for (int x : combination)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}