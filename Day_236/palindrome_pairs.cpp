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

int main() {
    vector<string> words = {"abcd", "dcba", "lls", "s", "sssll"};

    for (int i = 0; i < words.size(); i++) {
        for (int j = 0; j < words.size(); j++) {
            if (i == j)
                continue;

            if (isPalindrome(words[i] + words[j]))
                cout << "[" << i << ", " << j << "]\n";
        }
    }

    return 0;
}