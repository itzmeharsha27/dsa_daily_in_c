#include <bits/stdc++.h>
using namespace std;

int main() {
    string num = "1432219";

    for (int i = 0; i < num.size() - 1; i++) {
        if (num[i] > num[i + 1]) {
            num.erase(i, 1);
            break;
        }
    }

    cout << num << endl;

    return 0;
}