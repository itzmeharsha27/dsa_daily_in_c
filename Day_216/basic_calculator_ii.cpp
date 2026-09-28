#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int calculate(string s) {
        stack<int> st;

        int number = 0;
        char operation = '+';

        for (int i = 0; i <= s.size(); i++) {
            if (i < s.size() && isdigit(s[i])) {
                number = number * 10 + (s[i] - '0');
            }
            else if (i == s.size() || s[i] != ' ') {
                if (operation == '+')
                    st.push(number);
                else if (operation == '-')
                    st.push(-number);
                else if (operation == '*') {
                    int x = st.top();
                    st.pop();
                    st.push(x * number);
                }
                else if (operation == '/') {
                    int x = st.top();
                    st.pop();
                    st.push(x / number);
                }

                if (i < s.size())
                    operation = s[i];

                number = 0;
            }
        }

        int result = 0;

        while (!st.empty()) {
            result += st.top();
            st.pop();
        }

        return result;
    }
};

int main() {
    Solution s;

    cout << s.calculate("3+2*2");

    return 0;
}