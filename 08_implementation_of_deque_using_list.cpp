#include <iostream>
using namespace std;
class node
{
public:
    node *next, *prev;
    int data;
    node(int n)
    {
        data = n;
        next = prev = NULL;
    }
};
class deque
{
public:
    node *front, *rear;
    deque()
    {
        front = rear = NULL;
    }
    void push_front(int x)
    {
        if (front == NULL)
        {
            front = rear = new node(x);
            cout << "pushed " << front->data << "into front of queue " << endl;
            return;
        }
        else
        {
            node *temp = new node(x);
            temp->next = front;
            front->prev = temp;
            front = temp;
            cout << "pushed " << front->data << "into front of queue " << endl;
            return;
        }
    }
    void push_back(int x)
    {
        if (front == NULL)
        {
            front = rear = new node(x);
            cout << "pushed " << rear->data << "into queue " << endl;
            return;
        }
        else
        {
            node *temp = new node(x);
            rear->next = temp;
            temp->prev = rear;
            rear = temp;
            cout << "pushed " << rear->data << "into queue " << endl;
            return;
        }
    }
    void pop_front()
    {
        if (front == NULL)
        {
            return;
        }
        else
        {
            node *temp = front;
            front = front->next;
            cout << "popped " << temp->data << "front front of queue " << endl;
            delete temp;
            if (front)
            {
                front->prev = NULL;
            }
            else
            {
                rear = NULL;
            }
        }
    }
    void pop_back()
    {
        if (front == NULL)
            return;
        else
        {
            node *temp = rear;
            rear = temp->prev;
            cout << "popped " << temp->data << "from queue " << endl;
            delete temp;
            if (rear)
            {
                rear->next = NULL;
            }
            else
            {
                front = NULL;
            }
        }
    }
    int start()
    {
        if (front == NULL)
            return -1;
        else
            return front->data;
    }
    int end()
    {
        if (front == NULL)
            return -1;
        else
            return rear->data;
    }
};
int main()
{
    deque q;
    q.push_back(2);
    q.push_back(10);
    q.push_back(15);
    q.pop_front();
    q.pop_front();
}