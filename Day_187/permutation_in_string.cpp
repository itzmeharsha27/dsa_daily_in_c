#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Permutation in String
// Sliding Window + Frequency Array

bool checkInclusion(string s1, string s2)
{
    if(s1.length() > s2.length())
        return false;

    vector<int> count1(26, 0);
    vector<int> count2(26, 0);

    // Frequency of characters in s1
    for(char ch : s1)
        count1[ch - 'a']++;

    int windowSize = s1.length();

    // First window
    for(int i = 0; i < windowSize; i++)
        count2[s2[i] - 'a']++;

    if(count1 == count2)
        return true;

    // Slide the window
    for(int right = windowSize;
        right < s2.length();
        right++)
    {
        count2[s2[right] - 'a']++;

        count2[s2[right - windowSize] - 'a']--;

        if(count1 == count2)
            return true;
    }

    return false;
}

int main()
{
    string s1 = "ab";
    string s2 = "eidbaooo";

    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;

    cout << "Permutation Exists: "
         << checkInclusion(s1, s2)
         << endl;

    return 0;
}