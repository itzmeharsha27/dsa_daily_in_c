#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    string reversed = s;
    reverse(reversed.begin(), reversed.end());

    return s == reversed;
}

int main() {
    cout << boolalpha;
    cout << isPalindrome("aba") << endl;
    cout << isPalindrome("abc") << endl;

    return 0;
}