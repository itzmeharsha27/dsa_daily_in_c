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
            s[index] = tolower(static_cast<unsigned char>(original));
            backtrack(s, index + 1);

            s[index] = toupper(static_cast<unsigned char>(original));
            backtrack(s, index + 1);

            s[index] = original;
        } else {
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

    vector<string> answer = sol.letterCasePermutation("a1b");

    for (string x : answer)
        cout << x << endl;

    return 0;
}