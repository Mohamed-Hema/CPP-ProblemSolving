#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *front = NULL;
Node *rear = NULL;
void enqueue(int value);
void dequeue();
int peek();
int main()
{

    return 0;
}

void enqueue(int value)
{
    Node *new_node = new Node;
    new_node->data = value;
    new_node->next = NULL;

    if (front == NULL)
    {
        front = rear = new_node;
    }
    else
    {
        rear->next = new_node;
        rear = new_node;
    }
}
void dequeue()
{
    if (rear == NULL)
    {
        cout << "queue is empty." << endl;
    }
    else if (front == rear)
    {
        Node *ptr = front;
        front = rear = NULL;
        delete (ptr);
    }
    else
    {
        Node *ptr = front;
        front = front->next;
        delete (ptr);
    }
}
int peek()
{
    if (front == NULL)
    {
        cout << "queue is empty" << endl;
        return -1;
    }
    else
    {
        return front->data;
    }
}