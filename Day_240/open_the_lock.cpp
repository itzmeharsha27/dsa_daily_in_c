#include <iostream>
#include <string>
using namespace std;

int main() {
    string combination = "0000";

    for (int i = 0; i < 4; i++) {
        string next = combination;

        next[i] = (combination[i] - '0' + 1) % 10 + '0';
        cout << next << '\n';

        next[i] = (combination[i] - '0' + 9) % 10 + '0';
        cout << next << '\n';
    }

    return 0;
}