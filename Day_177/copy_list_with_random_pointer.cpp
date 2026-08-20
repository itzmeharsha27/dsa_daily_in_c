#include <iostream>
#include <unordered_map>
using namespace std;

// Copy List with Random Pointer
// Using Hash Map

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

    // Step 1: Create a copy of every node
    while(current)
    {
        mp[current] = new Node(current->data);
        current = current->next;
    }

    current = head;

    // Step 2: Connect next and random pointers
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
    // Create original list
    Node* head = new Node(7);

    head->next = new Node(13);
    head->next->next = new Node(11);
    head->next->next->next = new Node(10);
    head->next->next->next->next = new Node(1);

    // Set random pointers
    head->next->random = head;
    head->next->next->random =
        head->next->next->next->next;
    head->next->next->next->random =
        head->next->next;
    head->next->next->next->next->random =
        head;

    // Create deep copy
    Node* copy = copyRandomList(head);

    cout << "Original List: ";
    display(head);

    cout << "Copied List: ";
    display(copy);

    return 0;
}