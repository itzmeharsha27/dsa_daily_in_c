#include <iostream>
#include <string>
using namespace std;

string expand(string s, int left, int right)
{
    while(left >= 0 &&
          right < s.length() &&
          s[left] == s[right])
    {
        left--;
        right++;
    }

    return s.substr(left + 1, right - left - 1);
}

int main()
{
    string s = "babad";

    cout << expand(s, 2, 2);

    return 0;
}