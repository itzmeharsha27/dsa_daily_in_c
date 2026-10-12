#include <bits/stdc++.h>
using namespace std;

bool isValid(string part) {
    if (part.empty() || part.size() > 3)
        return false;

    if (part.size() > 1 && part[0] == '0')
        return false;

    return stoi(part) <= 255;
}

void generate(string s, int index, int count, string current) {
    if (count == 4) {
        if (index == s.size())
            cout << current << endl;

        return;
    }

    for (int len = 1; len <= 3 && index + len <= s.size(); len++) {
        string part = s.substr(index, len);

        if (!isValid(part))
            continue;

        string next = current.empty()
            ? part
            : current + "." + part;

        generate(s, index + len, count + 1, next);
    }
}

int main() {
    generate("25525511135", 0, 0, "");

    return 0;
}