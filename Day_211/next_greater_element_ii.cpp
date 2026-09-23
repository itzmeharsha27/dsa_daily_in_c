#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1,2,1};
    int n = nums.size();

    vector<int> result(n, -1);

    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n; j++) {
            int index = (i + j) % n;

            if (nums[index] > nums[i]) {
                result[i] = nums[index];
                break;
            }
        }
    }

    for (int x : result)
        cout << x << " ";

    return 0;
}