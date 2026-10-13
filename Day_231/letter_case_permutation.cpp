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

void print(vector<string>& result) {
    for (string x : result)
        cout << x << " ";

    cout << endl;
}

int main() {
    Solution sol;

    vector<string> first = sol.letterCasePermutation("a1b");
    print(first);

    vector<string> second = sol.letterCasePermutation("3z4");
    print(second);

    return 0;
}