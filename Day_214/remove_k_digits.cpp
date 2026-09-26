#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeKdigits(string num, int k) {
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

        return result.empty() ? "0" : result;
    }
};

int main() {
    Solution s;

    cout << s.removeKdigits("1432219", 3) << endl;

    return 0;
}