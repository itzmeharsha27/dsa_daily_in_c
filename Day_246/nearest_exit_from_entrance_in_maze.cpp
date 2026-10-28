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

        return -1;
    }
};