#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> pacificAtlantic(
        vector<vector<int>>& heights) {
        if (heights.empty() || heights[0].empty()) {
            return {};
        }

        int rows = heights.size();
        int cols = heights[0].size();

        vector<vector<bool>> pacific(
            rows, vector<bool>(cols, false));

        vector<vector<bool>> atlantic(
            rows, vector<bool>(cols, false));

        return {};
    }
};