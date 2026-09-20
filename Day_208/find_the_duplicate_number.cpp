#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1,3,4,2,2};

    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] == nums[j]) {
                cout << "Duplicate: " << nums[i] << endl;
                return 0;
            }
        }
    }

    return 0;
}