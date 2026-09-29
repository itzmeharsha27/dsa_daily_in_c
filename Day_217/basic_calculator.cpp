#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "12-5+3";

    int result = 0;
    int number = 0;
    int sign = 1;

    for (int i = 0; i <= s.size(); i++) {
        if (i < s.size() && isdigit(s[i])) {
            number = number * 10 + (s[i] - '0');
        }
        else if (i == s.size() || s[i] != ' ') {
            result += sign * number;

            if (i < s.size())
                sign = (s[i] == '+') ? 1 : -1;

            number = 0;
        }
    }

    cout << result;

    return 0;
}