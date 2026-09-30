#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> tokens = {"2", "1", "+", "3", "*"};

    stack<int> st;

    for (string token : tokens) {
        if (token != "+" && token != "-" &&
            token != "*" && token != "/") {
            st.push(stoi(token));
        }
    }

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}