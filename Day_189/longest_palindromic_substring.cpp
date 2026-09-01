#include <iostream>
#include <string>
using namespace std;

// Longest Palindromic Substring
// Expand Around Center

string expand(string s, int left, int right)
{
    while(left >= 0 &&
          right < s.length() &&
          s[left] == s[right])
    {
        left--;
        right++;
    }

    return s.substr(
        left + 1,
        right - left - 1
    );
}

string longestPalindrome(string s)
{
    if(s.length() <= 1)
        return s;

    string answer = "";

    for(int i = 0; i < s.length(); i++)
    {
        string odd = expand(s, i, i);
        string even = expand(s, i, i + 1);

        if(odd.length() > answer.length())
            answer = odd;

        if(even.length() > answer.length())
            answer = even;
    }

    return answer;
}

int main()
{
    string s = "babad";

    string result = longestPalindrome(s);

    cout << "Input: " << s << endl;
    cout << "Longest Palindromic Substring: "
         << result << endl;

    return 0;
}