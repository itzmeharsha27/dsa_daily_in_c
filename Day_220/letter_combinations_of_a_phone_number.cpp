#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> letters = {
        "", "", "abc", "def", "ghi",
        "jkl", "mno", "pqrs", "tuv", "wxyz"
    };

    string digits = "23";

    for (char digit : digits) {
        cout << letters[digit - '0'] << endl;
    }

    return 0;
}