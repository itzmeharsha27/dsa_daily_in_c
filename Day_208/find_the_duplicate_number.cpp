#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1,3,4,2,2};

    int slow = nums[0];
    int fast = nums[0];

    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    cout << "Cycle detected at: " << slow << endl;

    return 0;
}