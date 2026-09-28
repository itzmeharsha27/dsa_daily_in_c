#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "3+2-5";

    int result = 0;
    int number = 0;
    char operation = '+';

    for (int i = 0; i <= s.size(); i++) {
        if (i < s.size() && isdigit(s[i])) {
            number = number * 10 + (s[i] - '0');
        } else {
            if (operation == '+')
                result += number;
            else
                result -= number;

            if (i < s.size())
                operation = s[i];

            number = 0;
        }
    }

    cout << result;

    return 0;
}