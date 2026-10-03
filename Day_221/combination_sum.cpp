#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> candidates = {2, 3, 6, 7};
    int target = 7;

    for (int a : candidates) {
        for (int b : candidates) {
            if (a + b == target)
                cout << a << " " << b << endl;
        }
    }

    return 0;
}