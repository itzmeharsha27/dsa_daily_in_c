#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 4;
    vector<string> board(n, string(n, '.'));

    for (string row : board)
        cout << row << endl;

    return 0;
}