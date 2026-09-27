#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "3[ab]";

    int number = 0;
    string word = "";

    int i = 0;

    while (isdigit(s[i])) {
        number = number * 10 + (s[i] - '0');
        i++;
    }

    i++;

    while (s[i] != ']') {
        word += s[i];
        i++;
    }

    cout << "Number: " << number << endl;
    cout << "Word: " << word << endl;

    return 0;
}