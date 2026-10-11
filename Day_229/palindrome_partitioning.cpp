#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> result;

bool isPalindrome(string part) {
    string reversed = part;
    reverse(reversed.begin(), reversed.end());

    return part == reversed;
}

void backtrack(string& s, int start, vector<string>& current) {
    if (start == s.size()) {
        result.push_back(current);
        return;
    }

    for (int end = start; end < s.size(); end++) {
        string part = s.substr(start, end - start + 1);

        if (!isPalindrome(part))
            continue;

        current.push_back(part);
        backtrack(s, end + 1, current);
        current.pop_back();
    }
}

vector<vector<string>> partition(string s) {
    result.clear();

    vector<string> current;
    backtrack(s, 0, current);

    return result;
}

int main() {
    vector<vector<string>> answer = partition("aab");

    for (auto parts : answer) {
        for (string part : parts)
            cout << part << " ";

        cout << endl;
    }

    return 0;
}