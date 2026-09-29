#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "1-(2-3)";

    int result = 0;
    int number = 0;
    int sign = 1;

    stack<int> values;
    stack<int> signs;

    for (char c : s) {
        if (isdigit(c)) {
            number = number * 10 + (c - '0');
        }
        else if (c == '+' || c == '-') {
            result += sign * number;
            number = 0;
            sign = (c == '+') ? 1 : -1;
        }
        else if (c == '(') {
            values.push(result);
            signs.push(sign);

            result = 0;
            sign = 1;
        }
        else if (c == ')') {
            result += sign * number;
            number = 0;

            result = values.top() + signs.top() * result;

            values.pop();
            signs.pop();
        }
    }

    result += sign * number;

    cout << result;

    return 0;
}