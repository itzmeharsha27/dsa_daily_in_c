#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {7,2,5,10,8};
    int k = 2;

    int total = 0;
    int maximum = 0;

    for (int x : nums) {
        total += x;
        maximum = max(maximum, x);
    }

    cout << "Maximum element: " << maximum << endl;
    cout << "Total sum: " << total << endl;

    return 0;
}