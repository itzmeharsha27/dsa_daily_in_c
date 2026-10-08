#include <bits/stdc++.h>
using namespace std;

void backtrack(vector<int>& nums,
               vector<bool>& used,
               vector<int>& current) {

    if (current.size() == nums.size()) {
        for (int x : current)
            cout << x << " ";

        cout << endl;
        return;
    }

    for (int i = 0; i < nums.size(); i++) {

        if (used[i])
            continue;

        if (i > 0 && nums[i] == nums[i - 1] && !used[i - 1])
            continue;

        used[i] = true;
        current.push_back(nums[i]);

        backtrack(nums, used, current);

        current.pop_back();
        used[i] = false;
    }
}

int main() {
    vector<int> nums = {1, 1, 2};

    sort(nums.begin(), nums.end());

    vector<bool> used(nums.size(), false);
    vector<int> current;

    backtrack(nums, used, current);

    return 0;
}