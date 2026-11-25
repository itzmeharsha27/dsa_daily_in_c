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

            for (const string& product : products) {
                if (product.find(prefix) == 0)
                    suggestions.push_back(product);
            }

            answer.push_back(suggestions);
        }

        return answer;
    }
};