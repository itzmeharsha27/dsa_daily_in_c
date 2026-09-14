#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 1};

    for (int i = 0; i < nums.size(); i++) {

        bool leftOK = (i == 0 || nums[i] > nums[i - 1]);
        bool rightOK = (i == nums.size() - 1 ||
                        nums[i] > nums[i + 1]);

        if (leftOK && rightOK) {
            cout << i;
            return 0;
        }
    }

    return 0;
}