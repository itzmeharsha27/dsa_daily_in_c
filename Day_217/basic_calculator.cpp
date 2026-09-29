#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "(1+(4+5+2)-3)+(6+8)";

    int result = 0;
    int number = 0;
    int sign = 1;

    stack<int> st;

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