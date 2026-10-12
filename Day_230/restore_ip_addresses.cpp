#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "25525511135";

    for (int len = 1; len <= 3; len++) {
        cout << s.substr(0, len) << endl;
    }

    return 0;
}