#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> result;
vector<int> nums = {1, 2, 3};

void backtrack(int index, vector<int>& current) {
    if (index == nums.size()) {
        result.push_back(current);
        return;
    }

    backtrack(index + 1, current);

    current.push_back(nums[index]);

    backtrack(index + 1, current);

    current.pop_back();
}

int main() {
    vector<int> current;

    backtrack(0, current);

    for (auto subset : result) {
        cout << "[ ";

        for (int x : subset)
            cout << x << " ";

        cout << "] ";
    }

    return 0;
}