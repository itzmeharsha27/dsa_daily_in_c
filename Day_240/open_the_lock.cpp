#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> deadends = {
        "0201", "0101", "0102", "1212", "2002"
    };

    string target = "0202";

    cout << "Starting combination: 0000\n";
    cout << "Target: " << target << '\n';

    cout << "Deadends:\n";
    for (const string& deadend : deadends)
        cout << deadend << '\n';

    return 0;
}