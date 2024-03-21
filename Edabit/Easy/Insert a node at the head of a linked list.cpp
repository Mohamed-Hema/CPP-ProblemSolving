#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *head = NULL;

void insertNode(int value);
void printList();

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        insertNode(value);
    }

    printList();

    return 0;
}

void insertNode(int value)
{
    node *new_node = new node;
    new_node->data = value;
    new_node->next = head;
    head = new_node;
}

void printList()
{
    node *current = head;
    while (current != NULL)
    {
        cout << current->data << endl;
        current = current->next;
    }
}
