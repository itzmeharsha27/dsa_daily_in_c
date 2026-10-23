#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<vector<int>> neighbors = {
        {1, 3},
        {0, 2, 4},
        {1, 5},
        {0, 4},
        {1, 3, 5},
        {2, 4}
    };

    string state = "123405";
    int zeroPosition = state.find('0');

    for (int nextPosition : neighbors[zeroPosition]) {
        string nextState = state;
        swap(nextState[zeroPosition], nextState[nextPosition]);

        cout << nextState << '\n';
    }

    return 0;
}