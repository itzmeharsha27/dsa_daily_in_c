#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> candidates = {10, 1, 2, 7, 6, 1, 5};

    sort(candidates.begin(), candidates.end());

    for (int x : candidates)
        cout << x << " ";

    return 0;
}