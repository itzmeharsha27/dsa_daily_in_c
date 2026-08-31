#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Find All Anagrams in a String

vector<int> findAnagrams(string s, string p)
{
    vector<int> result;

    if(p.length() > s.length())
        return result;

    vector<int> patternFreq(26, 0);
    vector<int> windowFreq(26, 0);

    for(char ch : p)
        patternFreq[ch - 'a']++;

    int k = p.length();

    // First window
    for(int i = 0; i < k; i++)
        windowFreq[s[i] - 'a']++;

    if(patternFreq == windowFreq)
        result.push_back(0);

    // Slide window
    for(int right = k; right < s.length(); right++)
    {
        windowFreq[s[right] - 'a']++;

        int left = right - k;

        windowFreq[s[left] - 'a']--;

        if(patternFreq == windowFreq)
            result.push_back(left + 1);
    }

    return result;
}

int main()
{
    string s = "cbaebabacd";
    string p = "abc";

    vector<int> result = findAnagrams(s, p);

    cout << "String: " << s << endl;
    cout << "Pattern: " << p << endl;
    cout << "Starting Indices: ";

    for(int index : result)
        cout << index << " ";

    cout << endl;

    return 0;
}