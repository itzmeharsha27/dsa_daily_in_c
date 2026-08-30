#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool checkInclusion(string s1, string s2)
{
    if(s1.length() > s2.length())
        return false;

    vector<int> count1(26, 0);
    vector<int> count2(26, 0);

    for(char ch : s1)
        count1[ch - 'a']++;

    for(int i = 0; i < s1.length(); i++)
        count2[s2[i] - 'a']++;

    return count1 == count2;
}

int main()
{
    string s1 = "ab";
    string s2 = "eidbaooo";

    cout << checkInclusion(s1, s2);

    return 0;
}