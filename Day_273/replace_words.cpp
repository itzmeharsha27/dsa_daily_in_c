#include <sstream>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_set<string> roots;

        for (string root : dictionary)
            roots.insert(root);

        string answer;
        string word;

        stringstream ss(sentence);
        bool firstWord = true;

        while (ss >> word) {
            string prefix = "";
            bool found = false;

            for (char ch : word) {
                prefix += ch;

                if (roots.count(prefix)) {
                    found = true;
                    break;
                }
            }

            if (!found)
                prefix = word;

            if (!firstWord)
                answer += " ";

            answer += prefix;
            firstWord = false;
        }

        return answer;
    }
};