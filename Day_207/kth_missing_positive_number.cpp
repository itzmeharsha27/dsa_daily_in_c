#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {2,3,4,7,11};
    int k = 5;

    int missing = 0;

    for (int n = 1; ; n++) {
        bool found = false;

        for (int x : arr) {
            if (x == n) {
                found = true;
                break;
            }
        }

        if (!found) {
            missing++;

            if (missing == k) {
                cout << n << endl;
                break;
            }
        }
    }

    return 0;
}