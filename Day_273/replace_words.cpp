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

        while (ss >> word) {
            string prefix = "";

            for (char ch : word) {
                prefix += ch;

                if (roots.count(prefix))
                    break;
            }

            answer += prefix + " ";
        }

        return answer;
    }
};