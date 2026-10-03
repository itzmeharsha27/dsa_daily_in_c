#include <bits/stdc++.h>
using namespace std;

vector<int> candidates = {2, 3, 6, 7};
int target = 7;

void generate(int index, int sum, vector<int> current) {
    if (sum == target) {
        for (int x : current)
            cout << x << " ";
        cout << endl;
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
    generate(0, 0, {});

    return 0;
}