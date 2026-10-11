#include <bits/stdc++.h>
using namespace std;

string s = "aab";

bool isPalindrome(string part) {
    string reversed = part;
    reverse(reversed.begin(), reversed.end());

    return part == reversed;
}

void backtrack(int start, vector<string> current) {
    if (start == s.size()) {
        for (string part : current)
            cout << part << " ";

        cout << endl;
        return;
    }

    for (int end = start; end < s.size(); end++) {
        string part = s.substr(start, end - start + 1);

        if (!isPalindrome(part))
            continue;

        current.push_back(part);
        backtrack(end + 1, current);
        current.pop_back();
    }
}

int main() {
    backtrack(0, {});

    return 0;
}