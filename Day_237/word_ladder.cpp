#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <unordered_set>
using namespace std;

int ladderLength(string beginWord, string endWord,
                 vector<string>& wordList) {
    unordered_set<string> words(wordList.begin(), wordList.end());

    if (!words.count(endWord))
        return 0;

    queue<string> q;
    q.push(beginWord);

    words.erase(beginWord);
    int steps = 1;

    while (!q.empty()) {
        int levelSize = q.size();

        for (int i = 0; i < levelSize; i++) {
            string word = q.front();
            q.pop();

            if (word == endWord)
                return steps;

            for (int pos = 0; pos < word.size(); pos++) {
                char original = word[pos];

                for (char ch = 'a'; ch <= 'z'; ch++) {
                    if (ch == original)
                        continue;

                    word[pos] = ch;

                    auto it = words.find(word);

                    if (it != words.end()) {
                        q.push(word);
                        words.erase(it);
                    }
                }

                word[pos] = original;
            }
        }

        steps++;
    }

    return 0;
}

int main() {
    vector<string> words = {
        "hot", "dot", "dog", "lot", "log", "cog"
    };

    cout << ladderLength("hit", "cog", words) << '\n';
    return 0;
}