#include <iostream>
#include <queue>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> neighbors = {
        {1, 3}, {0, 2, 4}, {1, 5},
        {0, 4}, {1, 3, 5}, {2, 4}
    };

    string start = "123405";
    string target = "123450";

    queue<string> q;
    unordered_set<string> visited;

    q.push(start);
    visited.insert(start);

    int moves = 0;

    while (!q.empty()) {
        int levelSize = q.size();

        while (levelSize--) {
            string state = q.front();
            q.pop();

            if (state == target) {
                cout << "Minimum moves: " << moves << '\n';
                return 0;
            }

            int zeroPosition = state.find('0');

            for (int nextPosition : neighbors[zeroPosition]) {
                string nextState = state;
                swap(nextState[zeroPosition], nextState[nextPosition]);

                if (visited.insert(nextState).second)
                    q.push(nextState);
            }
        }

        moves++;
    }

    cout << -1 << '\n';
    return 0;
}