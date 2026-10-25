#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> mat = {
        {0, 0, 0},
        {0, 1, 0},
        {1, 1, 1}
    };

    for (const auto& row : mat) {
        for (int cell : row)
            cout << cell << ' ';
        cout << '\n';
    }

    return 0;
}