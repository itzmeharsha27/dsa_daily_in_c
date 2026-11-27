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
        }

        return false;
    }
};