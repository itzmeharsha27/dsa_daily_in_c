#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> result;

    vector<string> letters = {
        "", "", "abc", "def", "ghi",
        "jkl", "mno", "pqrs", "tuv", "wxyz"
    };

    void backtrack(string& digits, int index, string current) {
        if (index == digits.size()) {
            result.push_back(current);
            return;
        }

        for (char c : letters[digits[index] - '0']) {
            backtrack(digits, index + 1, current + c);
        }
    }

    vector<string> letterCombinations(string digits) {
        if (digits.empty())
            return {};

        backtrack(digits, 0, "");

        return result;
    }
};

int main() {
    Solution s;

    vector<string> answer = s.letterCombinations("23");

    for (string x : answer)
        cout << x << " ";

    return 0;
}