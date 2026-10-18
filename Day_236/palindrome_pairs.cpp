#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> words = {"abcd", "dcba", "lls", "s", "sssll"};

    for (int i = 0; i < words.size(); i++)
        cout << i << ": " << words[i] << '\n';

    return 0;
}