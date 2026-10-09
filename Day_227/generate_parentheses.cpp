#include <bits/stdc++.h>
using namespace std;

void generate(int n, int open, int close, string current) {
    if (current.size() == 2 * n) {
        cout << current << endl;
        return;
    }

    if (open < n)
        generate(n, open + 1, close, current + "(");

    if (close < open)
        generate(n, open, close + 1, current + ")");
}

int main() {
    generate(3, 0, 0, "");

    return 0;
}