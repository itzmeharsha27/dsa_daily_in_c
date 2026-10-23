#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int slidingPuzzle(vector<vector<int>>& board) {
        const vector<vector<int>> neighbors = {
            {1, 3},
            {0, 2, 4},
            {1, 5},
            {0, 4},
            {1, 3, 5},
            {2, 4}
        };

        string start;

        for (const auto& row : board)
            for (int value : row)
                start += char('0' + value);

        const string target = "123450";

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

                if (state == target)
                    return moves;

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

        return -1;
    }
};

int main() {
    vector<vector<int>> board = {
        {1, 2, 3},
        {4, 0, 5}
    };

    Solution solution;
    cout << solution.slidingPuzzle(board) << '\n';

    return 0;
}