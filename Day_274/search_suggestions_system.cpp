#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<string>> suggestedProducts(
        vector<string>& products,
        string searchWord
    ) {
        sort(products.begin(), products.end());

        vector<vector<string>> answer;
        string prefix;

        for (char ch : searchWord) {
            prefix += ch;
            answer.push_back({});
        }

        return answer;
    }
};