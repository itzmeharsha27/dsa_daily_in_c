#include <bits/stdc++.h>
using namespace std;

void generate(int n, string current) {
    if (current.size() == 2 * n) {
        cout << current << endl;
        return;
    }

    generate(n, current + "(");
    generate(n, current + ")");
}

int main() {
    generate(2, "");

    return 0;
}