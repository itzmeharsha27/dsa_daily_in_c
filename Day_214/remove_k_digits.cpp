#include <bits/stdc++.h>
using namespace std;

int main() {
    string num = "1432219";
    int k = 3;

    while (k > 0) {
        int index = num.size() - 1;

        for (int i = 0; i < num.size() - 1; i++) {
            if (num[i] > num[i + 1]) {
                index = i;
                break;
            }
        }

        num.erase(index, 1);
        k--;
    }

    cout << num << endl;

    return 0;
}