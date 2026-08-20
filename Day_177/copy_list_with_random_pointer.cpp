#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node* random;

    Node(int value)
    {
        data = value;
        next = nullptr;
        random = nullptr;
    }
};

int main()
{
    Node* head = new Node(7);

    head->next = new Node(13);
    head->next->next = new Node(11);
    head->next->next->next = new Node(10);
    head->next->next->next->next = new Node(1);

    return 0;
}