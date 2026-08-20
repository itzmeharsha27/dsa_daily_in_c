#include <iostream>
#include <unordered_map>
using namespace std;

// Copy List with Random Pointer

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

Node* copyRandomList(Node* head)
{
    if(!head)
        return nullptr;

    unordered_map<Node*, Node*> mp;

    Node* current = head;

    // Create copy of every node
    while(current)
    {
        mp[current] = new Node(current->data);
        current = current->next;
    }

    current = head;

    // Connect next and random pointers
    while(current)
    {
        mp[current]->next = mp[current->next];

        if(current->random)
            mp[current]->random = mp[current->random];

        current = current->next;
    }

    return mp[head];
}

void display(Node* head)
{
    while(head)
    {
        cout << head->data;

        if(head->next)
            cout << " -> ";

        head = head->next;
    }

    cout << endl;
}

int main()
{
    Node* head = new Node(7);

    head->next = new Node(13);
    head->next->next = new Node(11);
    head->next->next->next = new Node(10);
    head->next->next->next->next = new Node(1);

    head->next->random = head;
    head->next->next->random = head->next->next->next->next;
    head->next->next->next->random = head->next->next;
    head->next->next->next->next->random = head;

    Node* copy = copyRandomList(head);

    cout << "Original List: ";
    display(head);

    cout << "Copied List: ";
    display(copy);

    return 0;
}