#include <bits/stdc++.h>
using namespace std;

vector<int> nums = {1, 2, 2};

void backtrack(int start, vector<int>& current) {
    cout << "[ ";

    for (int x : current)
        cout << x << " ";

    cout << "]" << endl;

    for (int i = start; i < nums.size(); i++) {
        current.push_back(nums[i]);

        backtrack(i + 1, current);

        current.pop_back();
    }
}

int main() {
    vector<int> current;

    backtrack(0, current);

    return 0;
}