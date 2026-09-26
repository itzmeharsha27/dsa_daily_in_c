#include <bits/stdc++.h>
using namespace std;

int main() {
    string num = "10200";
    int k = 1;

    string st;

    for (char digit : num) {
        while (!st.empty() && k > 0 && st.back() > digit) {
            st.pop_back();
            k--;
        }

        st.push_back(digit);
    }

    while (k > 0) {
        st.pop_back();
        k--;
    }

    int start = 0;

    while (start < st.size() && st[start] == '0')
        start++;

    string result = st.substr(start);

    if (result.empty())
        result = "0";

    cout << result << endl;

    return 0;
}