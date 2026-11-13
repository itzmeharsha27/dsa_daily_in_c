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

        return "";
    }
};