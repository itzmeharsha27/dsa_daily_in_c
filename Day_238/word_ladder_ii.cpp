#include <vector>
#include <string>
#include <queue>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
    unordered_map<string, vector<string>> parents;
    vector<vector<string>> result;
    string beginWord;

    void backtrack(const string& word, vector<string>& path) {
        if (word == beginWord) {
            vector<string> sequence = path;
            reverse(sequence.begin(), sequence.end());
            result.push_back(sequence);
            return;
        }

        for (const string& parent : parents[word]) {
            path.push_back(parent);
            backtrack(parent, path);
            path.pop_back();
        }
    }

public:
    vector<vector<string>> findLadders(
        string start, string end, vector<string>& wordList
    ) {
        beginWord = start;
        parents.clear();
        result.clear();

        unordered_set<string> words(wordList.begin(), wordList.end());

        if (!words.count(end))
            return result;

        queue<string> q;
        q.push(start);
        words.erase(start);

        bool found = false;

        while (!q.empty() && !found) {
            int size = q.size();
            unordered_set<string> usedThisLevel;

            while (size--) {
                string word = q.front();
                q.pop();

                for (int i = 0; i < word.size(); i++) {
                    char original = word[i];

                    for (char ch = 'a'; ch <= 'z'; ch++) {
                        if (ch == original)
                            continue;

                        word[i] = ch;

                        if (!words.count(word))
                            continue;

                        parents[word].push_back(
                            word.substr(0, i) + original +
                            word.substr(i + 1)
                        );

                        usedThisLevel.insert(word);

                        if (word == end)
                            found = true;
                    }

                    word[i] = original;
                }
            }

            for (const string& word : usedThisLevel)
                if (!found || word == end)
                    q.push(word);

            for (const string& word : usedThisLevel)
                words.erase(word);
        }

        if (found) {
            vector<string> path = {end};
            backtrack(end,  path);
        }

        return result;
    }
};