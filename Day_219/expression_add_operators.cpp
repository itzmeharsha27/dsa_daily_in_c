#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> answer;

    void backtrack(string& num, int index,
                   long long value, long long previous,
                   long long target, string expression) {

        if (index == num.size()) {
            if (value == target)
                answer.push_back(expression);
            return;
        }

        for (int i = index; i < num.size(); i++) {
            if (i > index && num[index] == '0')
                break;

            string part = num.substr(index, i - index + 1);
            long long current = stoll(part);

            if (index == 0) {
                backtrack(num, i + 1, current, current,
                          target, part);
            } else {
                backtrack(num, i + 1,
                          value + current,
                          current,
                          target,
                          expression + "+" + part);

                backtrack(num, i + 1,
                          value - current,
                          -current,
                          target,
                          expression + "-" + part);

                long long multiplied = previous * current;

                backtrack(num, i + 1,
                          value - previous + multiplied,
                          multiplied,
                          target,
                          expression + "*" + part);
            }
        }
    }

    vector<string> addOperators(string num, int target) {
        backtrack(num, 0, 0, 0, target, "");
        return answer;
    }
};

int main() {
    Solution s;

    vector<string> result = s.addOperators("123", 6);

    for (string expression : result)
        cout << expression << endl;

    return 0;
}