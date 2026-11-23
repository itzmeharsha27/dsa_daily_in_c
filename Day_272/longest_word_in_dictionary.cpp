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

        for (const string& word : words) {
            if (word.size() == 1 ||
                seen.count(word.substr(0, word.size() - 1))) {

                seen.insert(word);

                if (word.size() > answer.size())
                    answer = word;
            }
        }

        return answer;
    }
};