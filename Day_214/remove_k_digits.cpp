#include <bits/stdc++.h>
using namespace std;

int main() {
    string num = "1432219";
    int k = 3;

    string st;

    for (char digit : num) {
        while (!st.empty() && k > 0 && st.back() > digit) {
            st.pop_back();
            k--;
        }

        st.push_back(digit);
    }

    cout << st << endl;

    return 0;
}