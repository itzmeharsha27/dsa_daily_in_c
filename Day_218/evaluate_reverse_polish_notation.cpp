#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (string token : tokens) {
            if (token == "+" || token == "-" ||
                token == "*" || token == "/") {

                int b = st.top();
                st.pop();

                int a = st.top();
                st.pop();

                if (token == "+")
                    st.push(a + b);
                else if (token == "-")
                    st.push(a - b);
                else if (token == "*")
                    st.push(a * b);
                else
                    st.push(a / b);
            } else {
                st.push(stoi(token));
            }
        }

        return st.top();
    }
};

int main() {
    Solution s;

    vector<string> a = {"2", "1", "+", "3", "*"};
    vector<string> b = {"4", "13", "5", "/", "+"};
    vector<string> c = {"10", "6", "9", "3", "/", "-", "*", "17", "+", "5", "+"};

    cout << s.evalRPN(a) << endl;
    cout << s.evalRPN(b) << endl;
    cout << s.evalRPN(c) << endl;

    return 0;
}