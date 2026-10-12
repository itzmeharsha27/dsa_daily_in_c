#include <bits/stdc++.h>
using namespace std;

bool isValid(string part) {
    if (part.empty() || part.size() > 3)
        return false;

    if (part.size() > 1 && part[0] == '0')
        return false;

    int value = stoi(part);

    return value <= 255;
}

int main() {
    cout << boolalpha;
    cout << isValid("255") << endl;
    cout << isValid("256") << endl;
    cout << isValid("01") << endl;

    return 0;
}