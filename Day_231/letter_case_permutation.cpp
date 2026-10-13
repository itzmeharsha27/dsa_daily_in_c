#include <bits/stdc++.h>
using namespace std;

vector<string> result;

void backtrack(string& s, int index) {
    if (index == s.size()) {
        result.push_back(s);
        return;
    }

    char original = s[index];

    if (isalpha(static_cast<unsigned char>(original))) {
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

    for (string x : result)
        cout << x << endl;

    return 0;
}