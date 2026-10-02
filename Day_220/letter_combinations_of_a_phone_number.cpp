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

    for (char c : letters[digits[index] - '0']) {
        generate(digits, index + 1, current + c);
    }
}

vector<string> letterCombinations(string digits) {
    if (digits.empty())
        return {};

    generate(digits, 0, "");

    return result;
}

int main() {
    vector<string> answer = letterCombinations("23");

    for (string x : answer)
        cout << x << " ";

    return 0;
}