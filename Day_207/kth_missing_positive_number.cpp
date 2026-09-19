#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {2,3,4,7,11};
    int k = 5;

    int missing = 0;

    for (int i = 0; i < arr.size(); i++) {
        int expected = i + 1;

        if (arr[i] > expected)
            missing += arr[i] - expected;

        if (missing >= k) {
            cout << arr[i] - (missing - k) << endl;
            return 0;
        }
    }

    cout << arr.back() + (k - missing) << endl;

    return 0;
}