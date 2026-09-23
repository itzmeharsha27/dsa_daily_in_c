#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1,2,1};

    for (int i = 0; i < nums.size(); i++) {
        int next = -1;

        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[j] > nums[i]) {
                next = nums[j];
                break;
            }
        }

        cout << next << " ";
    }

    return 0;
}