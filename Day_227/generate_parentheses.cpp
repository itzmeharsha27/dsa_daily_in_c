#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> result;

    void backtrack(int n, int open, int close, string current) {
        if (current.size() == 2 * n) {
            result.push_back(current);
            return;
        }

        if (open < n)
            backtrack(n, open + 1, close, current + "(");

        if (close < open)
            backtrack(n, open, close + 1, current + ")");
    }

    vector<string> generateParenthesis(int n) {
        result.clear();

        backtrack(n, 0, 0, "");

        return result;
    }
};

int main() {
    Solution s;

    vector<string> answer = s.generateParenthesis(3);

    for (string x : answer)
        cout << x << endl;

    return 0;
}