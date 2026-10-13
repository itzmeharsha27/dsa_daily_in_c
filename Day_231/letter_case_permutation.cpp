#include <bits/stdc++.h>
using namespace std;

void backtrack(string& s, int index) {
    if (index == s.size()) {
        cout << s << endl;
        return;
    }

    if (isalpha(static_cast<unsigned char>(s[index]))) {
        char original = s[index];

        s[index] = tolower(static_cast<unsigned char>(original));
        backtrack(s, index + 1);

        s[index] = toupper(static_cast<unsigned char>(original));
        backtrack(s, index + 1);

        s[index] = original;
    } else {
        backtrack(s, index + 1);
    }
}

int main() {
    string s = "a1b";

    backtrack(s, 0);

    return 0;
}