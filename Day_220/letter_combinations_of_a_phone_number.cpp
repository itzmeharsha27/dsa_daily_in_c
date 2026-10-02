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

        string chars = letters[digits[index] - '0'];

        for (char c : chars) {
            backtrack(digits, index + 1, current + c);
        }
    }

    vector<string> letterCombinations(string digits) {
        result.clear();

        if (digits.empty())
            return result;

        backtrack(digits, 0, "");

        return result;
    }
};

int main() {
    Solution s;

    vector<string> result = s.letterCombinations("23");

    for (string x : result)
        cout << x << " ";

    return 0;
}