#include <bits/stdc++.h>
using namespace std;

vector<string> letters = {
    "", "", "abc", "def", "ghi",
    "jkl", "mno", "pqrs", "tuv", "wxyz"
};

vector<string> result;

void generate(string digits, int index, string current) {
    if (index == digits.size()) {
        result.push_back(current);
        return;
    }

    string chars = letters[digits[index] - '0'];

    for (char c : chars) {
        generate(digits, index + 1, current + c);
    }
}

int main() {
    string digits = "23";

    generate(digits, 0, "");

    for (string x : result)
        cout << x << " ";

    return 0;
}