#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string startGene = "AACCGGTT";
    string endGene = "AAACGGTA";

    vector<string> bank = {
        "AACCGGTA", "AACCGCTA", "AAACGGTA"
    };

    cout << "Start: " << startGene << '\n';
    cout << "End: " << endGene << '\n';

    for (const string& gene : bank)
        cout << gene << '\n';

    return 0;
}