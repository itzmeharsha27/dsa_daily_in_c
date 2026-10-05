#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3};

    vector<vector<int>> result;

    result.push_back({});

    for (auto subset : result) {
        for (int x : subset)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}