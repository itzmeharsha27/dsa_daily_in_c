#include <bits/stdc++.h>
using namespace std;

void generate(string& num, int index,
              long long value, long long previous,
              long long target, string expression) {

    if (index == num.size()) {
        if (value == target)
            cout << expression << endl;
        return;
    }

    for (int i = index; i < num.size(); i++) {
        if (i > index && num[index] == '0')
            break;

        string part = num.substr(index, i - index + 1);
        long long current = stoll(part);

        if (index == 0) {
            generate(num, i + 1, current, current,
                     target, part);
        } else {
            generate(num, i + 1,
                     value + current, current,
                     target, expression + "+" + part);

            generate(num, i + 1,
                     value - current, -current,
                     target, expression + "-" + part);

            long long multiplied = previous * current;

            generate(num, i + 1,
                     value - previous + multiplied,
                     multiplied,
                     target, expression + "*" + part);
        }
    }
}

int main() {
    string num = "105";
    int target = 5;

    generate(num, 0, 0, 0, target, "");

    return 0;
}