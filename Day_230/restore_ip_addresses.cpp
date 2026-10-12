#include <bits/stdc++.h>
using namespace std;

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
            string address = parts[0] + "." + parts[1] + "." +
                             parts[2] + "." + parts[3];

            result.push_back(address);
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

int main() {
    string s = "25525511135";
    vector<string> parts;

    backtrack(s, 0, parts);

    for (string address : result)
        cout << address << endl;

    return 0;
}