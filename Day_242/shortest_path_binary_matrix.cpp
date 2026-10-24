#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> grid = {
        {0, 1},
        {1, 0}
    };

    int n = grid.size();

    if (grid[0][0] == 1 || grid[n - 1][n - 1] == 1)
        cout << -1 << '\n';
    else
        cout << "Both endpoints are clear\n";

    return 0;
}