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
        front = -1, rear = -1;
        size = n;
    }
    bool isempty()
    {
        return front == -1;
    }
    bool isfull()
    {
        return rear == size - 1;
    }

    void push(int x)
    {
        if (isempty())
        {
            front = rear = 0;
            arr[rear] = x;
            cout << "pushed " << arr[rear] << endl;
        }
        else if (isfull())
        {
            cout << "queue is overflow";
            return;
        }
        else
        {
            rear = rear + 1;
            arr[rear] = x;
            cout << "pushed " << arr[rear] << endl;
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
            if (front == rear)
            {
                front = -1;
                rear = -1;
            }
            else
            {
                cout << "popped " << arr[front] << endl;
                front++;
            }
        }
    }
};
int main()
{
    queue q(5);
    q.push(1);
    q.push(5);
    q.push(10);
    q.pop();
}