#include <iostream>
#include <string>
using namespace std;

int main() {
    string state = "123405";

    int zeroPosition = state.find('0');

    cout << "State: " << state << '\n';
    cout << "Empty space index: " << zeroPosition << '\n';

    return 0;
}