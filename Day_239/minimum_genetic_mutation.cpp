#include <iostream>
#include <string>
using namespace std;

bool differsByOne(const string& a, const string& b) {
    int differences = 0;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            differences++;
    }

    return differences == 1;
}

int main() {
    cout << boolalpha;
    cout << differsByOne("AACCGGTT", "AACCGGTA") << '\n';
    cout << differsByOne("AACCGGTT", "AAACGGTA") << '\n';

    return 0;
}