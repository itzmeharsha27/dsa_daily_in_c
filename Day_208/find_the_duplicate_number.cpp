#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1,3,4,2,2};

    vector<int> freq(nums.size(), 0);

    for (int x : nums) {
        freq[x]++;

        if (freq[x] > 1) {
            cout << "Duplicate: " << x << endl;
            break;
        }
    }

    return 0;
}