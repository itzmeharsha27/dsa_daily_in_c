#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> tokens = {"2", "1", "+", "3", "*"};

    for (string token : tokens) {
        if (token == "+" || token == "-" ||
            token == "*" || token == "/")
            cout << "Operator: " << token << endl;
        else
            cout << "Number: " << token << endl;
    }

    return 0;
}