#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    string s = "ADOBECODEBANC";
    string t = "ABC";

    unordered_map<char, int> required;

    for(char ch : t)
        required[ch]++;

    return 0;
}