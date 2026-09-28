#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "3+2*2";

    int result = 0;
    int number = 0;
    int previous = 0;
    char operation = '+';

    for (int i = 0; i <= s.size(); i++) {
        if (i < s.size() && isdigit(s[i])) {
            number = number * 10 + (s[i] - '0');
        } else {
            if (operation == '+') {
                result += previous;
                previous = number;
            }
            else if (operation == '-') {
                result += previous;
                previous = -number;
            }
            else if (operation == '*') {
                previous *= number;
            }
            else if (operation == '/') {
                previous /= number;
            }

            if (i < s.size())
                operation = s[i];

            number = 0;
        }
    }

    result += previous;

    cout << result;

    return 0;
}