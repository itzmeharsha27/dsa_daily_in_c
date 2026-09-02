#include <iostream>
#include <string>
using namespace std;

// Palindromic Substrings
// Using Expand Around Center

int expand(string s, int left, int right)
{
    int count = 0;

    // Expand while characters are equal
    while(left >= 0 &&
          right < s.length() &&
          s[left] == s[right])
    {
        // Every successful expansion
        // gives one palindrome
        count++;

        left--;
        right++;
    }

    return count;
}

int countSubstrings(string s)
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
         << countSubstrings(s)
         << endl;

    return 0;
}