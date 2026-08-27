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

        while(left <= right && formed == requiredCount)
        {
            if(right - left + 1 < minLength)
            {
                minLength = right - left + 1;
                start = left;
            }

            char leftChar = s[left];

            window[leftChar]--;

            if(required.count(leftChar) &&
               window[leftChar] < required[leftChar])
            {
                formed--;
            }

            left++;
        }
    }

    if(minLength == s.length() + 1)
        return "";

    return s.substr(start, minLength);
}

int main()
{
    string s = "ADOBECODEBANC";
    string t = "ABC";

    cout << "Minimum Window: "
         << minWindow(s, t) << endl;

    return 0;
}