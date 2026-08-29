#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// Longest Repeating Character Replacement
// Sliding Window + Frequency Array

int characterReplacement(string s, int k)
{
    vector<int> freq(26, 0);

    int left = 0;
    int maxFreq = 0;
    int answer = 0;

    for(int right = 0; right < s.length(); right++)
    {
        // Count current character
        freq[s[right] - 'A']++;

        // Most frequent character in window
        maxFreq = max(
            maxFreq,
            freq[s[right] - 'A']
        );

        // Characters that need replacement
        int replacements =
            (right - left + 1) - maxFreq;

        // Shrink invalid window
        if(replacements > k)
        {
            freq[s[left] - 'A']--;
            left++;
        }

        // Update maximum length
        answer = max(
            answer,
            right - left + 1
        );
    }

    return answer;
}

int main()
{
    string s = "AABABBA";
    int k = 1;

    cout << "Input: " << s << endl;
    cout << "K: " << k << endl;

    cout << "Longest Length: "
         << characterReplacement(s, k)
         << endl;

    return 0;
}