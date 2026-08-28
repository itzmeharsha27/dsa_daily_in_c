#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

// Longest Substring Without Repeating Characters

int lengthOfLongestSubstring(string s)
{
    unordered_map<char, int> freq;

    int left = 0;
    int maxLength = 0;

    for(int right = 0; right < s.length(); right++)
    {
        freq[s[right]]++;

        // Remove duplicate characters
        while(freq[s[right]] > 1)
        {
            freq[s[left]]--;
            left++;
        }

        maxLength = max(
            maxLength,
            right - left + 1
        );
    }

    return maxLength;
}

int main()
{
    string s = "abcabcbb";

    cout << "String: " << s << endl;
    cout << "Longest Length: "
         << lengthOfLongestSubstring(s) << endl;

    return 0;
}