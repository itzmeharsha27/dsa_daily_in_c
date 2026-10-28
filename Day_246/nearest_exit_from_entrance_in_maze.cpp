#include <vector>
#include <queue>
#include <utility>
using namespace std;

class Solution {
public:
    int nearestExit(vector<vector<char>>& maze,
                    vector<int>& entrance) {
        int rows = maze.size();
        int cols = maze[0].size();

        queue<pair<int, int>> q;
        q.push({entrance[0], entrance[1]});

        int steps = 0;

        while (!q.empty()) {
            int size = q.size();

            for (int i = 0; i < size; i++) {
                auto [r, c] = q.front();
                q.pop();
            }

            steps++;
        }

        return -1;
    }
};