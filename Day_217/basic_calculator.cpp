#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = " 2-1 + 2 ";

    int result = 0;
    int number = 0;
    int sign = 1;

    stack<int> st;

    for (int i = 0; i < s.size(); i++) {
        char c = s[i];

        if (isdigit(c)) {
            number = number * 10 + (c - '0');
        }
        else if (c == '+' || c == '-') {
            result += sign * number;
            number = 0;
            sign = (c == '+') ? 1 : -1;
        }
        else if (c == '(') {
            st.push(result);
            st.push(sign);

            result = 0;
            sign = 1;
        }
        else if (c == ')') {
            result += sign * number;
            number = 0;

            int previousSign = st.top();
            st.pop();

            int previousResult = st.top();
            st.pop();

            result = previousResult + previousSign * result;
            sign = 1;
        }
    }

    result += sign * number;

    cout << result;

    return 0;
}