#include <iostream>
using namespace std;

#define SIZE 5

int queue[SIZE];

int front = -1;
int rear = -1;

void enqueue(int value);
void dequeue();
int peek();
void display();

int main()
{
    enqueue(5);
    enqueue(10);
    enqueue(15);
    display();
    dequeue();
    display();
    cout << "peek = " << peek();
    return 0;
}

void enqueue(int value)
{
    if (rear != SIZE - 1)
    {
        if (front == -1 && rear == -1)
        {
            // rear++; -> replacing it by adding it inside queue
            front++;
            queue[++rear] = value;
        }
        else
        {
            // rear++;
            queue[++rear] = value;
        }
    }
    else
    {
        cout << "queue is full." << endl;
    }
}
void dequeue()
{
    if (front != -1 && rear != -1 && front <= rear)
    {
        front++;
    }
    else
    {
        cout << "queue is empty." << endl;
    }
}
int peek()
{
    if (front != -1 && rear != -1 && front <= rear)
    {
        return queue[front];
    }
    else
    {
        cout << "queue is empty." << endl;
    }
}

void display()
{
    if (front != -1 && rear != -1 && front <= rear)
    {
        for (int i = front; i <= rear; i++)
        {
            cout << queue[i] << "\t";
        }
    }
    else
    {
        cout << "queue is empty." << endl;
    }
}