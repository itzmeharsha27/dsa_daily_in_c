#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> grid = {
        {0, 1},
        {1, 0}
    };

    for (const auto& row : grid) {
        for (int cell : row)
            cout << cell << ' ';
        cout << '\n';
    }

    return 0;
}