#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

// Longest Substring Without Repeating Characters
// Sliding Window + Hash Map

int lengthOfLongestSubstring(string s)
{
    unordered_map<char, int> freq;

    int left = 0;
    int maxLength = 0;

    for(int right = 0; right < s.length(); right++)
    {
        // Add current character
        freq[s[right]]++;

        // Shrink window while duplicate exists
        while(freq[s[right]] > 1)
        {
            freq[s[left]]--;
            left++;
        }

        // Update maximum window length
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

    cout << "Input: " << s << endl;

    cout << "Longest Substring Length: "
         << lengthOfLongestSubstring(s)
         << endl;

    return 0;
}