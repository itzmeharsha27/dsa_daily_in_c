#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 1};

    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {

        int mid = left + (right - left) / 2;

        cout << "Mid: " << mid << endl;
        break;
    }

    return 0;
}