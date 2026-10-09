#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> result;

    void backtrack(int n, int open, int close, string& current) {
        if (current.size() == 2 * n) {
            result.push_back(current);
            return;
        }

        // Add an opening bracket if available.
        if (open < n) {
            current.push_back('(');
            backtrack(n, open + 1, close, current);
            current.pop_back();
        }

        // Add a closing bracket only when it remains valid.
        if (close < open) {
            current.push_back(')');
            backtrack(n, open, close + 1, current);
            current.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        result.clear();

        string current;
        backtrack(n, 0, 0, current);

        return result;
    }
};

int main() {
    Solution s;

    vector<string> result = s.generateParenthesis(3);

    for (string parentheses : result)
        cout << parentheses << endl;

    return 0;
}