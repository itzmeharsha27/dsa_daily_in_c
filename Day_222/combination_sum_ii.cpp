#include <bits/stdc++.h>
using namespace std;

vector<int> candidates = {1, 1, 2, 5, 6, 7, 10};
int target = 8;

void generate(int start, int remaining, vector<int> current) {
    if (remaining == 0) {
        for (int x : current)
            cout << x << " ";
        cout << endl;
        return;
    }

    if (remaining < 0)
        return;

    for (int i = start; i < candidates.size(); i++) {
        current.push_back(candidates[i]);

        generate(i + 1,
                 remaining - candidates[i],
                 current);

        current.pop_back();
    }
}

int main() {
    generate(0, target, {});

    return 0;
}