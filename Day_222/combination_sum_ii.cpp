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

    for (int i = start; i < candidates.size(); i++) {

        if (i > start && candidates[i] == candidates[i - 1])
            continue;

        if (candidates[i] > remaining)
            break;

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

    sort(candidates.begin(), candidates.end());

    vector<int> current;

    generate(candidates, 0, 8, current);

    for (auto combination : result) {
        for (int x : combination)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}