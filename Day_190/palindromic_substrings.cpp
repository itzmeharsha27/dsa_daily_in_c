#include <iostream>
#include <string>
using namespace std;

// Palindromic Substrings
// Expand Around Center

int expand(string s, int left, int right)
{
    int count = 0;

    while(left >= 0 &&
          right < s.length() &&
          s[left] == s[right])
    {
        count++;

        left--;
        right++;
    }

    return count;
}

int countPalindromes(string s)
{
    int count = 0;

    for(int i = 0; i < s.length(); i++)
    {
        // Odd length palindromes
        count += expand(s, i, i);

        // Even length palindromes
        count += expand(s, i, i + 1);
    }

    return count;
}

int main()
{
    string s = "aaa";

    cout << "Input: " << s << endl;
    cout << "Palindromic Substrings: "
         << countPalindromes(s)
         << endl;

    return 0;
}