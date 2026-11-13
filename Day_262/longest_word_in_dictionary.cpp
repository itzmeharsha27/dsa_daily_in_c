#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
using namespace std;

class Solution {
public:
    string longestWord(vector<string>& words) {
        sort(words.begin(), words.end());

        unordered_set<string> wordsSet;

        for (const string& word : words)
            wordsSet.insert(word);

        string answer = "";

        for (const string& word : words) {
            bool valid = true;

            for (int i = 1; i <= word.length(); i++) {
                if (!wordsSet.count(word.substr(0, i))) {
                    valid = false;
                    break;
                }
            }

            if (valid && word.length() > answer.length()) {
                answer = word;
            }
        }

        return answer;
    }
};