#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "3+25*2";

    int number = 0;

    for (char c : s) {
        if (isdigit(c))
            number = number * 10 + (c - '0');
        else {
            cout << number << endl;
            number = 0;
        }
    }

    cout << number << endl;

    return 0;
}