#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {7,2,5,10,8};
    int capacity = 18;

    int sum = 0;
    int parts = 1;

    for (int x : nums) {
        if (sum + x > capacity) {
            parts++;
            sum = 0;
        }

        sum += x;
    }

    cout << "Required parts: " << parts << endl;

    return 0;
}