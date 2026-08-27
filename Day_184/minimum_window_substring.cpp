#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

// Minimum Window Substring
// Sliding Window + Frequency Map

string minWindow(string s, string t)
{
    if(t.empty() || s.empty())
        return "";

    // Store required frequency of characters
    unordered_map<char, int> required;

    for(char ch : t)
        required[ch]++;

    unordered_map<char, int> window;

    int left = 0;

    // Number of character types completely satisfied
    int formed = 0;

    int requiredCount = required.size();

    // Best window information
    int minLength = s.length() + 1;
    int start = 0;

    // Expand the window
    for(int right = 0; right < s.length(); right++)
    {
        char ch = s[right];

        window[ch]++;

        // Character requirement satisfied
        if(required.count(ch) &&
           window[ch] == required[ch])
        {
            formed++;
        }

        // Try shrinking the window
        while(left <= right &&
              formed == requiredCount)
        {
            // Update smallest window
            if(right - left + 1 < minLength)
            {
                minLength = right - left + 1;
                start = left;
            }

            // Remove left character
            char leftChar = s[left];

            window[leftChar]--;

            // Window is no longer valid
            if(required.count(leftChar) &&
               window[leftChar] < required[leftChar])
            {
                formed--;
            }

            left++;
        }
    }

    // No valid window found
    if(minLength == s.length() + 1)
        return "";

    return s.substr(start, minLength);
}

int main()
{
    string s = "ADOBECODEBANC";
    string t = "ABC";

    string result = minWindow(s, t);

    cout << "String: " << s << endl;
    cout << "Required: " << t << endl;
    cout << "Minimum Window: " << result << endl;

    return 0;
}