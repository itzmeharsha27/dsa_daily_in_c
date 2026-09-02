#include <iostream>
#include <string>
using namespace std;

// Count Palindromic Substrings

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
        count += expand(s, i, i);
        count += expand(s, i, i + 1);
    }

    return count;
}

int main()
{
    string s = "aaa";

    int result = countPalindromes(s);

    cout << "String: " << s << endl;
    cout << "Number of Palindromic Substrings: "
         << result << endl;

    return 0;
}