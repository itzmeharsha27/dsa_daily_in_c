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

            vector<string> suggestions;

            int left = lower_bound(products.begin(), products.end(), prefix)
                     - products.begin();

            for (int i = left; i < products.size() && suggestions.size() < 3; i++) {
                if (products[i].compare(0, prefix.size(), prefix) == 0)
                    suggestions.push_back(products[i]);
                else
                    break;
            }

            answer.push_back(suggestions);
        }

        return answer;
    }
};