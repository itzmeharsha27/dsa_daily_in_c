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

void print(vector<string>& result) {
    for (string s : result)
        cout << s << " ";

    cout << endl;
}

int main() {
    Solution s;

    vector<string> result1 = s.generateParenthesis(1);
    print(result1);

    vector<string> result2 = s.generateParenthesis(3);
    print(result2);

    return 0;
}