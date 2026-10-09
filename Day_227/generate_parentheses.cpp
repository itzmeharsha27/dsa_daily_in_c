#include <bits/stdc++.h>
using namespace std;

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

int main() {
    backtrack(3, 0, 0, "");

    for (string s : result)
        cout << s << endl;

    return 0;
}