#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> tokens = {"2", "1", "+", "3", "*"};

    for (string token : tokens) {
        if (token == "+" || token == "-" ||
            token == "*" || token == "/") {
            cout << token << " is an operator" << endl;
        } else {
            cout << token << " is a number" << endl;
        }
    }

    return 0;
}