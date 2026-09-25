#include <bits/stdc++.h>
using namespace std;

int main() {
    int right = 10;
    int left = -5;

    if (right > abs(left))
        cout << right;
    else if (right < abs(left))
        cout << left;
    else
        cout << "Both destroyed";

    return 0;
}