#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "3[a]2[bc]";

    for (char ch : s) {
        if (isdigit(ch))
            cout << "Number: " << ch << endl;
    }

    return 0;
}