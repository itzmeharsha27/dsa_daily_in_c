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

            current.push_back(s.substr(start, end - start + 1));
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
};

void print(vector<vector<string>>& result) {
    for (auto parts : result) {
        cout << "[ ";

        for (string part : parts)
            cout << part << " ";

        cout << "] ";
    }

    cout << endl;
}

int main() {
    Solution sol;

    vector<vector<string>> first = sol.partition("aab");
    print(first);

    vector<vector<string>> second = sol.partition("a");
    print(second);

    return 0;
}