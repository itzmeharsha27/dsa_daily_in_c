#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string decodeString(string s) {
        stack<int> numbers;
        stack<string> strings;

        int number = 0;
        string current = "";

        for (char c : s) {
            if (isdigit(c)) {
                number = number * 10 + (c - '0');
            }
            else if (c == '[') {
                numbers.push(number);
                strings.push(current);

                number = 0;
                current = "";
            }
            else if (c == ']') {
                int repeat = numbers.top();
                numbers.pop();

                string previous = strings.top();
                strings.pop();

                string temp = "";

                for (int i = 0; i < repeat; i++)
                    temp += current;

                current = previous + temp;
            }
            else {
                current += c;
            }
        }

        return current;
    }
};

int main() {
    Solution s;

    cout << s.decodeString("3[a2[c]]");

    return 0;
}