#include <bits/stdc++.h>
using namespace std;

void generate(int start, vector<int> current) {
    if (current.size() == 3) {
        for (int x : current)
            cout << x << " ";

        cout << endl;
        return;
    }

    for (int i = start; i <= 9; i++) {
        current.push_back(i);
        generate(i + 1, current);
        current.pop_back();
    }
}

int main() {
    generate(1, {});

    return 0;
}