#include <bits/stdc++.h>
using namespace std;

void generate(string s, int index) {
    if (index == s.size()) {
        cout << s << endl;
        return;
    }

    if (isalpha(static_cast<unsigned char>(s[index]))) {
        s[index] = tolower(static_cast<unsigned char>(s[index]));
        generate(s, index + 1);

        s[index] = toupper(static_cast<unsigned char>(s[index]));
        generate(s, index + 1);
    } else {
        generate(s, index + 1);
    }
}

int main() {
    generate("a1b", 0);

    return 0;
}