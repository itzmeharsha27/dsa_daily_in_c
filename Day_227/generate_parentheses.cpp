#include <bits/stdc++.h>
using namespace std;

vector<string> generateParenthesis(int n) {
    vector<string> result;

    function<void(int, int, string)> backtrack =
        [&](int open, int close, string current) {
            if (current.size() == 2 * n) {
                result.push_back(current);
                return;
            }

            if (open < n)
                backtrack(open + 1, close, current + "(");

            if (close < open)
                backtrack(open, close + 1, current + ")");
        };

    backtrack(0, 0, "");

    return result;
}

int main() {
    vector<string> answer = generateParenthesis(3);

    for (string s : answer)
        cout << s << endl;

    return 0;
}