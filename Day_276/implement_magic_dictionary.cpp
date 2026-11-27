#include <string>
#include <vector>
using namespace std;

class MagicDictionary {
    vector<string> words;

public:
    MagicDictionary() {
    }

    void buildDict(vector<string> dictionary) {
        words = dictionary;
    }

    bool search(string searchWord) {
        for (const string& word : words) {
            if (word.size() != searchWord.size())
                continue;

            int differences = 0;

            for (int i = 0; i < word.size(); i++) {
                if (word[i] != searchWord[i])
                    differences++;
            }

            if (differences == 1)
                return true;
        }

        return false;
    }
};