#include <iostream>
#include <string>
#include <vector>
using namespace std;

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

    for(int i = 0; i < k; i++)
        windowFreq[s[i] - 'a']++;

    if(patternFreq == windowFreq)
        result.push_back(0);

    return result;
}

int main()
{
    string s = "cbaebabacd";
    string p = "abc";

    vector<int> result = findAnagrams(s, p);

    for(int index : result)
        cout << index << " ";

    return 0;
}