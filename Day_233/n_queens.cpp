#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 4;
    vector<string> board(n, string(n, '.'));

    board[0][1] = 'Q';

    for (string row : board)
        cout << row << endl;

    return 0;
}