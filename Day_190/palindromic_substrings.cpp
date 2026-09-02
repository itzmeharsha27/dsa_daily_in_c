#include <iostream>
#include <string>
using namespace std;

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

int main()
{
    string s = "aaa";

    cout << expand(s, 1, 1);

    return 0;
}