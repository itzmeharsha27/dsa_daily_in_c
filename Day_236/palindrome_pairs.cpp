#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

bool isPalindrome(const string& s, int left, int right) {
    while (left < right) {
        if (s[left] != s[right])
            return false;
        left++;
        right--;
    }
    return true;
}

vector<vector<int>> palindromePairs(vector<string>& words) {
    unordered_map<string, int> indexMap;
    vector<vector<int>> result;

    for (int i = 0; i < words.size(); i++)
        indexMap[words[i]] = i;

    for (int i = 0; i < words.size(); i++) {
        const string& word = words[i];
        int n = word.size();

        for (int cut = 0; cut <= n; cut++) {
            if (isPalindrome(word, 0, cut - 1)) {
                string suffix = word.substr(cut);
                reverse(suffix.begin(), suffix.end());

                auto it = indexMap.find(suffix);

                if (it != indexMap.end() && it->second != i)
                    result.push_back({it->second, i});
            }

            if (cut != n && isPalindrome(word, cut, n - 1)) {
                string prefix = word.substr(0, cut);
                reverse(prefix.begin(), prefix.end());

                auto it = indexMap.find(prefix);

                if (it != indexMap.end() && it->second != i)
                    result.push_back({i, it->second});
            }
        }
    }

    sort(result.begin(), result.end());
    result.erase(unique(result.begin(), result.end()), result.end());

    return result;
}

int main() {
    vector<string> words = {"abcd", "dcba", "lls", "s", "sssll"};

    for (auto& pair : palindromePairs(words)) {
        cout << "[" << pair[0] << ", " << pair[1] << "]\n";
    }

    return 0;
}