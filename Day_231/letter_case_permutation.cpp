#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> result;

    void backtrack(string& s, int index) {
        if (index == s.size()) {
            result.push_back(s);
            return;
        }

        char original = s[index];

        if (isalpha(static_cast<unsigned char>(original))) {
            // Choose lowercase.
            s[index] = tolower(static_cast<unsigned char>(original));
            backtrack(s, index + 1);

            // Choose uppercase.
            s[index] = toupper(static_cast<unsigned char>(original));
            backtrack(s, index + 1);

            // Restore the original character.
            s[index] = original;
        } else {
            // Digits remain unchanged.
            backtrack(s, index + 1);
        }
    }

    vector<string> letterCasePermutation(string s) {
        result.clear();

        backtrack(s, 0);

        return result;
    }
};

int main() {
    Solution sol;

    vector<string> result = sol.letterCasePermutation("a1b");

    for (string x : result)
        cout << x << endl;

    return 0;
}