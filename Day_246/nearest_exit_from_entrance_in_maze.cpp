#include <vector>
#include <queue>
#include <utility>
using namespace std;

class Solution {
public:
    int nearestExit(vector<vector<char>>& maze,
                    vector<int>& entrance) {
        if (maze.empty() || maze[0].empty()) {
            return -1;
        }

        int rows = maze.size();
        int cols = maze[0].size();

        queue<pair<int, int>> q;
        q.push({entrance[0], entrance[1]});

        maze[entrance[0]][entrance[1]] = '+';

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};
        int steps = 0;

        while (!q.empty()) {
            int size = q.size();

            for (int j = 0; j < size; j++) {
                auto [r, c] = q.front();
                q.pop();

                for (int i = 0; i < 4; i++) {
                    int nr = r + dr[i];
                    int nc = c + dc[i];

                    if (nr >= 0 && nr < rows &&
                        nc >= 0 && nc < cols &&
                        maze[nr][nc] == '.') {

                        if (nr == 0 || nr == rows - 1 ||
                            nc == 0 || nc == cols - 1) {
                            return steps + 1;
                        }

                        maze[nr][nc] = '+';
                        q.push({nr, nc});
                    }
                }
            }

            steps++;
        }

        return -1;
    }
};