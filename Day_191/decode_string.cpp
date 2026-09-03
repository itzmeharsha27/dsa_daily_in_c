#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "3[a]2[bc]";

    stack<int> nums;
    stack<string> strs;

    int num = 0;
    string current = "";

    for (char ch : s) {
        if (isdigit(ch)) {
            num = num * 10 + (ch - '0');
        }
        else if (ch == '[') {
            nums.push(num);
            strs.push(current);

            num = 0;
            current = "";
        }
        else if (isalpha(ch)) {
            current += ch;
        }
    }

    cout << current << endl;

    return 0;
}