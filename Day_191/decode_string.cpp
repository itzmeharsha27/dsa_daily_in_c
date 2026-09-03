#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string decodeString(string s) {
        stack<int> numStack;
        stack<string> strStack;

        int num = 0;
        string current = "";

        for (char ch : s) {
            if (isdigit(ch)) {
                num = num * 10 + (ch - '0');
            }
            else if (ch == '[') {
                numStack.push(num);
                strStack.push(current);

                num = 0;
                current = "";
            }
            else if (isalpha(ch)) {
                current += ch;
            }
            else if (ch == ']') {
                int repeat = numStack.top();
                numStack.pop();

                string previous = strStack.top();
                strStack.pop();

                string decoded = "";

                while (repeat--) {
                    decoded += current;
                }

                current = previous + decoded;
            }
        }

        return current;
    }
};

int main() {
    Solution s;

    cout << s.decodeString("3[a2[c]]") << endl;

    return 0;
}