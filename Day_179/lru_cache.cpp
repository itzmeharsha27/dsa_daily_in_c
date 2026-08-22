#include <iostream>
#include <unordered_map>
using namespace std;

struct Node
{
    int key;
    int value;
    Node* prev;
    Node* next;
};

int main()
{
    unordered_map<int, Node*> cache;

    return 0;
}