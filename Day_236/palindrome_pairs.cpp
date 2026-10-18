#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    vector<string> words = {"abcd", "dcba", "lls", "s", "sssll"};
    unordered_map<string, int> indexMap;

    for (int i = 0; i < words.size(); i++)
        indexMap[words[i]] = i;

    for (int i = 0; i < words.size(); i++) {
        string reversed = words[i];
        reverse(reversed.begin(), reversed.end());

        auto it = indexMap.find(reversed);

        if (it != indexMap.end() && it->second != i)
            cout << "[" << i << ", " << it->second << "]\n";
    }

    return 0;
}