#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    string reversed = s;
    reverse(reversed.begin(), reversed.end());

    return s == reversed;
}

int main() {
    string s = "aab";

    for (int i = 0; i < s.size(); i++) {
        for (int j = i; j < s.size(); j++) {
            string part = s.substr(i, j - i + 1);

            if (isPalindrome(part))
                cout << part << endl;
        }
    }

    return 0;
}