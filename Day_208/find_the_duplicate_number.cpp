#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1,3,4,2,2};

    unordered_set<int> seen;

    for (int x : nums) {
        if (seen.count(x)) {
            cout << "Duplicate: " << x << endl;
            return 0;
        }

        seen.insert(x);
    }

    return 0;
}