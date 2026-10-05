#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3};

    vector<vector<int>> result = {{}};

    for (int num : nums) {
        int size = result.size();

        for (int i = 0; i < size; i++) {
            vector<int> subset = result[i];
            subset.push_back(num);
            result.push_back(subset);
        }
    }

    for (auto subset : result) {
        cout << "[ ";
        for (int x : subset)
            cout << x << " ";
        cout << "] ";
    }

    return 0;
}