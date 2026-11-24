#include <sstream>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_set<string> roots;

        for (const string& root : dictionary)
            roots.insert(root);

        string answer;
        string word;

        stringstream ss(sentence);

        while (ss >> word) {
            string prefix;

            for (char ch : word) {
                prefix += ch;

                if (roots.count(prefix))
                    break;
            }

            if (!roots.count(prefix))
                prefix = word;

            if (!answer.empty())
                answer += " ";

            answer += prefix;
        }

        return answer;
    }
};