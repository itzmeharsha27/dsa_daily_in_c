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

        for (string word : words)
            wordsSet.insert(word);

        string answer = "";

        for (string word : words) {
            bool valid = true;
            string prefix = "";

            for (char ch : word) {
                prefix += ch;

                if (!wordsSet.count(prefix)) {
                    valid = false;
                    break;
                }
            }

            if (valid && word.length() > answer.length())
                answer = word;
        }

        return answer;
    }
};