#include <bits/stdc++.h>
using namespace std;

int main() {
    string num = "123";

    cout << num.substr(0, 1) << " + "
         << num.substr(1, 1) << " + "
         << num.substr(2, 1) << endl;

    cout << num.substr(0, 1) << " * "
         << num.substr(1, 1) << " * "
         << num.substr(2, 1) << endl;

    return 0;
}