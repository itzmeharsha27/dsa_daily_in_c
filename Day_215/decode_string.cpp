#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string decodeString(string s) {
        stack<int> counts;
        stack<string> words;

        int number = 0;
        string current = "";

        for (char c : s) {
            if (isdigit(c)) {
                number = number * 10 + (c - '0');
            }
            else if (c == '[') {
                counts.push(number);
                words.push(current);

                number = 0;
                current = "";
            }
            else if (c == ']') {
                int repeat = counts.top();
                counts.pop();

                string previous = words.top();
                words.pop();

                string expanded = "";

                for (int i = 0; i < repeat; i++)
                    expanded += current;

                current = previous + expanded;
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