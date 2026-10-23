#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<vector<int>> board = {
        {1, 2, 3},
        {4, 0, 5}
    };

    string state;

    for (auto& row : board)
        for (int value : row)
            state += char('0' + value);

    cout << "Initial state: " << state << '\n';
    cout << "Target state: 123450\n";

    return 0;
}