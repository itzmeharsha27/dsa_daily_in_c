#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Permutation in String
// Using Fixed-Size Sliding Window

bool checkInclusion(string s1, string s2)
{
    // If s1 is larger, permutation is impossible
    if(s1.length() > s2.length())
        return false;

    vector<int> count1(26, 0);
    vector<int> count2(26, 0);

    // Count characters in s1
    for(char ch : s1)
    {
        count1[ch - 'a']++;
    }

    int windowSize = s1.length();

    // Create first window in s2
    for(int i = 0; i < windowSize; i++)
    {
        count2[s2[i] - 'a']++;
    }

    // Check first window
    if(count1 == count2)
        return true;

    // Slide the window
    for(int right = windowSize;
        right < s2.length();
        right++)
    {
        // Add new character
        count2[s2[right] - 'a']++;

        // Remove character leaving the window
        int left = right - windowSize;

        count2[s2[left] - 'a']--;

        // Compare frequencies
        if(count1 == count2)
            return true;
    }

    return false;
}

int main()
{
    string s1 = "ab";
    string s2 = "eidbaooo";

    cout << "String 1: " << s1 << endl;
    cout << "String 2: " << s2 << endl;

    bool result = checkInclusion(s1, s2);

    cout << "Permutation Exists: "
         << (result ? "true" : "false")
         << endl;

    return 0;
}