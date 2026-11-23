#include <algorithm>
#include <unordered_set>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string longestWord(vector<string>& words) {
        sort(words.begin(), words.end());

        unordered_set<string> seen;
        string answer = "";

        for (string word : words) {
            bool valid = true;

            for (int i = 1; i < word.size(); i++) {
                if (seen.find(word.substr(0, i)) == seen.end()) {
                    valid = false;
                    break;
                }
            }

            if (valid)
                seen.insert(word);
        }

        return answer;
    }
};