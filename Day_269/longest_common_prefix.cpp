#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())
            return "";

        string prefix = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            int length = min(prefix.size(), strs[i].size());
            int j = 0;

            while (j < length && prefix[j] == strs[i][j])
                j++;

            prefix.resize(j);

            if (prefix.empty())
                return "";
        }

        return prefix;
    }
};