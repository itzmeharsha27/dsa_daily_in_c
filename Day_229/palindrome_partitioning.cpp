#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> result;

    bool isPalindrome(string& s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right])
                return false;

            left++;
            right--;
        }

        return true;
    }

    void backtrack(string& s, int start, vector<string>& current) {
        if (start == s.size()) {
            result.push_back(current);
            return;
        }

        for (int end = start; end < s.size(); end++) {
            if (!isPalindrome(s, start, end))
                continue;

            // Choose a palindrome substring.
            current.push_back(s.substr(start, end - start + 1));

            // Explore the remaining string.
            backtrack(s, end + 1, current);

            // Undo the choice.
            current.pop_back();
        }
    }

    vector<vector<string>> partition(string s) {
        result.clear();

        vector<string> current;
        backtrack(s, 0, current);

        return result;
    }
};

int main() {
    Solution sol;

    vector<vector<string>> result = sol.partition("aab");

    for (auto parts : result) {
        cout << "[ ";

        for (string part : parts)
            cout << part << " ";

        cout << "]" << endl;
    }

    return 0;
}