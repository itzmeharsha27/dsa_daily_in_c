#include <bits/stdc++.h>
using namespace std;

vector<string> letterCasePermutation(string s) {
    vector<string> result;

    function<void(int)> backtrack = [&](int index) {
        if (index == s.size()) {
            result.push_back(s);
            return;
        }

        char original = s[index];

        if (isalpha(static_cast<unsigned char>(original))) {
            s[index] = tolower(static_cast<unsigned char>(original));
            backtrack(index + 1);

            s[index] = toupper(static_cast<unsigned char>(original));
            backtrack(index + 1);

            s[index] = original;
        } else {
            backtrack(index + 1);
        }
    };

    backtrack(0);

    return result;
}

int main() {
    vector<string> answer = letterCasePermutation("a1b");

    for (string x : answer)
        cout << x << endl;

    return 0;
}