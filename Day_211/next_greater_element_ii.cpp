#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1,2,1};
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        int next = -1;

        for (int j = 1; j < n; j++) {
            int index = (i + j) % n;

            if (nums[index] > nums[i]) {
                next = nums[index];
                break;
            }
        }

        cout << next << " ";
    }

    return 0;
}