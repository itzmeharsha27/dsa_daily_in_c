#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& s) {
    int left = 0;
    int right = s.size() - 1;

    while (left < right) {
        if (s[left] != s[right])
            return false;

        left++;
        right--;
    }

    return true;
}

int main() {
    cout << boolalpha;
    cout << isPalindrome("abba") << '\n';
    cout << isPalindrome("abc") << '\n';

    return 0;
}