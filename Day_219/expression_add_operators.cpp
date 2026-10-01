#include <bits/stdc++.h>
using namespace std;

void generate(string& num, int index, string expression) {
    if (index == num.size()) {
        cout << expression << endl;
        return;
    }

    for (int i = index; i < num.size(); i++) {
        string part = num.substr(index, i - index + 1);

        if (index == 0)
            generate(num, i + 1, part);
        else {
            generate(num, i + 1, expression + "+" + part);
            generate(num, i + 1, expression + "-" + part);
            generate(num, i + 1, expression + "*" + part);
        }
    }
}

int main() {
    string num = "123";

    generate(num,0, "");

    return 0;
}