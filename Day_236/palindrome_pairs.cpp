#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isPalindrome(const string& s) {
    int left = 0, right = s.size() - 1;

    while (left < right) {
        if (s[left] != s[right])
            return false;
        left++;
        right--;
    }

    return true;
}

vector<vector<int>> palindromePairs(vector<string>& words) {
    vector<vector<int>> result;

    for (int i = 0; i < words.size(); i++) {
        for (int j = 0; j < words.size(); j++) {
            if (i != j && isPalindrome(words[i] + words[j]))
                result.push_back({i, j});
        }
    }

    return result;
}

int main() {
    vector<string> words = {"abcd", "dcba", "lls", "s", "sssll"};

    vector<vector<int>> result = palindromePairs(words);

    for (auto& pair : result)
        cout << "[" << pair[0] << ", " << pair[1] << "]\n";

    return 0;
}