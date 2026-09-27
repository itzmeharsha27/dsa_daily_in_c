#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "3[a]";

    int repeat = 3;
    string word = "a";

    string result = "";

    for (int i = 0; i < repeat; i++)
        result += word;

    cout << result << endl;

    return 0;
}