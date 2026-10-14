#include <bits/stdc++.h>
using namespace std;

void generate(int start, int remaining, vector<int>& current) {
    if (remaining == 0 && current.size() == 3) {
        for (int x : current)
            cout << x << " ";

        cout << endl;
        return;
    }

    if (remaining <= 0 || current.size() == 3)
        return;

    for (int i = start; i <= 9; i++) {
        if (i > remaining)
            break;

        current.push_back(i);
        generate(i + 1, remaining - i, current);
        current.pop_back();
    }
}

int main() {
    vector<int> current;

    generate(1, 7, current);

    return 0;
}