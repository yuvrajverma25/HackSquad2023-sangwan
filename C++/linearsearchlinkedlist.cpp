#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
void reverse(Node *head)
{
    Node *current = head;
    Node *prev = NULL, *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}
void insert(Node **head, int val)
{
    Node *node = new Node();
    node->data = val;
    node->next = (*head);
    (*head) = node;
}

void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << "->";
        node = node->next;
    }
}

int main()
{
    //FAST;
    Node *head = NULL;

    int a;

    while (a)
    {
        cout << "Enter 1 to insert a node\nEnter 0 to exit" << endl;
        cin >> a;
        int p;
        switch (a)
        {
        case 1:
        {
            cout << "Insert data into Linked List\n";
            cin >> p;
            insert(&head, p);
            printList(head);
            break;
        }
        }
        cout << "Enter 3 to reverse linked list\n";
        int n;
        cin >> n;
        if (n == 3)
            reverse(head);
        printList(head);
    }
    return 0;
}