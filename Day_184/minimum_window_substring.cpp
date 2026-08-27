#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

string minWindow(string s, string t)
{
    unordered_map<char, int> required;

    for(char ch : t)
        required[ch]++;

    unordered_map<char, int> window;

    int left = 0;
    int formed = 0;
    int requiredCount = required.size();

    int minLength = s.length() + 1;
    int start = 0;

    for(int right = 0; right < s.length(); right++)
    {
        char ch = s[right];

        window[ch]++;

        if(required.count(ch) &&
           window[ch] == required[ch])
        {
            formed++;
        }
    }

    return "";
}

int main()
{
    string s = "ADOBECODEBANC";
    string t = "ABC";

    cout << minWindow(s, t);

    return 0;
}