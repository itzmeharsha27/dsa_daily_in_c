#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> letters = {
        "", "", "abc", "def", "ghi",
        "jkl", "mno", "pqrs", "tuv", "wxyz"
    };

    string digits = "23";

    string first = letters[digits[0] - '0'];
    string second = letters[digits[1] - '0'];

    for (char a : first) {
        for (char b : second) {
            cout << a << b << endl;
        }
    }

    return 0;
}