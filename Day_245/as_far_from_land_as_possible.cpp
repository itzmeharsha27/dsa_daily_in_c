#include <vector>
using namespace std;

class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        int land = 0;
        int water = 0;

        for (int r = 0; r < n; r++) {
            for (int c = 0; c < m; c++) {
                if (grid[r][c] == 1) {
                    land++;
                } else {
                    water++;
                }
            }
        }

        if (land == 0 || water == 0) {
            return -1;
        }

        return 0;
    }
};