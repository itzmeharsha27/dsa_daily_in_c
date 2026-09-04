#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> tokens = {"2", "1", "+"};

    stack<int> st;

    for (string token : tokens) {
        if (token == "+") {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();

            st.push(a + b);
        }
        else {
            st.push(stoi(token));
        }
    }

    cout << st.top();

    return 0;
}