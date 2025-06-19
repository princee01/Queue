#include <iostream>
using namespace std;

class queue
{
    int *arr;
    int front, rear;
    int size;

public:
    queue(int n)
    {
        arr = new int[n];
        front = -1;
        rear = -1;
        size = n;
    }

    bool isempty()
    {
        return front == -1;
    }
    bool isfull()
    {
        return (rear + 1) % size == front;
    }

    void push(int x)
    {
        if (isempty())
        {
            front = rear = 0;
            arr[rear] = x;
            cout << "pushed " << arr[rear] << "at pos " << rear << endl;
        }
        else if (isfull())
        {
            cout << "overflow";
            return;
        }
        else
        {
            rear = (rear + 1) % size;
            arr[rear] = x;
            cout << "pushed " << arr[rear] << "at pos " << rear << endl;
        }
    }
    void pop()
    {
        if (isempty())
        {
            cout << "underflow";
        }
        else
        {
            cout << "popped " << arr[front] << endl;
            front = (front + 1) % size;
        }
    }
};
int main()
{
    queue q(4);
    q.push(5);
    q.push(10);
    q.push(15);
    q.push(25);
    q.pop();
    q.push(30);
}