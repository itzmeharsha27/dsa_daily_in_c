#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

class Twitter
{
private:
    unordered_map<int, unordered_set<int>> following;

public:

    Twitter()
    {
    }
};

int main()
{
    Twitter twitter;

    return 0;
}