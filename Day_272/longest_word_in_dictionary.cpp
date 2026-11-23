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
            seen.insert(word);
        }

        return answer;
    }
};