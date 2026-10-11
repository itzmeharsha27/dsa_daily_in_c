#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "aab";

    for (int i = 0; i < s.size(); i++) {
        for (int j = i; j < s.size(); j++) {
            cout << s.substr(i, j - i + 1) << endl;
        }
    }

    return 0;
}