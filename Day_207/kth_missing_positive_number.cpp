#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {2,3,4,7,11};

    int previous = 0;

    for (int x : arr) {
        for (int n = previous + 1; n < x; n++)
            cout << n << " ";

        previous = x;
    }

    return 0;
}