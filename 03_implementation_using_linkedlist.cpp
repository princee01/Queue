#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};
class queue
{
public:
    node *front, *rear;

    queue()
    {
        front = rear = NULL;
    }
    bool isempty()
    {
        return front == NULL;
    }
    void push(int x)
    {
        if (isempty())
        {
            front = new node(x);
            rear = front;
            cout << "pushed " << rear->data << " into list" << endl;
            return;
        }
        else
        {
            rear->next = new node(x);
            rear = rear->next;
            cout << "pushed " << rear->data << " into list" << endl;
        }
    }
    void pop()
    {
        if (isempty())
        {
            cout << "underflow";
            return;
        }
        else
        {
            cout << "popped " << front->data << " from list" << endl;
            node *temp = front;
            front = front->next;
            delete temp;
        }
    }
};
int main()
{
    queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.pop();
}