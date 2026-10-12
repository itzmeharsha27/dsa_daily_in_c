#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> result;

    bool isValid(string part) {
        if (part.empty() || part.size() > 3)
            return false;

        if (part.size() > 1 && part[0] == '0')
            return false;

        return stoi(part) <= 255;
    }

    void backtrack(string& s, int index, vector<string>& parts) {
        int remaining = s.size() - index;
        int needed = 4 - parts.size();

        if (remaining < needed || remaining > needed * 3)
            return;

        if (parts.size() == 4) {
            if (index == s.size()) {
                result.push_back(
                    parts[0] + "." + parts[1] + "." +
                    parts[2] + "." + parts[3]
                );
            }

            return;
        }

        for (int len = 1; len <= 3 && index + len <= s.size(); len++) {
            string part = s.substr(index, len);

            if (!isValid(part))
                continue;

            parts.push_back(part);
            backtrack(s, index + len, parts);
            parts.pop_back();
        }
    }

    vector<string> restoreIpAddresses(string s) {
        result.clear();

        if (s.size() < 4 || s.size() > 12)
            return result;

        vector<string> parts;
        backtrack(s, 0, parts);

        return result;
    }
};

int main() {
    Solution sol;

    vector<string> answer = sol.restoreIpAddresses("25525511135");

    for (string address : answer)
        cout << address << endl;

    return 0;
}