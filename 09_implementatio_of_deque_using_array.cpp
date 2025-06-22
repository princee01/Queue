#include <iostream>
using namespace std;
class deque
{
public:
    int *arr;
    int front, rear, size;

    deque(int n)
    {
        arr = new int[n];
        size = n;
        front = rear = -1;
    }
    bool isempty()
    {
        return front == -1;
    }
    bool isfull()
    {
        return (rear + 1) % size == front;
    }
    void push_front(int x)
    {
        if (isempty())
        {
            front = rear = 0;
            arr[0] = x;
            cout << "pushed " << arr[front] << " in front of array" << endl;
            return;
        }
        else if (isfull())
        {
            cout << "overflow" << endl;
            return;
        }
        else
        {
            front = (front - 1 + size) % size;
            arr[front] = x;
            cout << "pushed " << arr[front] << " in front of array" << endl;
            return;
        }
    }
    void push_back(int x)
    {
        if (isempty())
        {
            front = rear = 0;
            arr[0] = x;
            cout << "pushed " << arr[front] << " into back of array" << endl;
            return;
        }
        else if (isfull())
        {
            cout << "overflow" << endl;
            return;
        }
        else
        {
            rear = (rear + 1) % size;
            arr[rear] = x;
            cout << "pushed " << arr[rear] << " into back of array" << endl;
            return;
        }
    }
    void pop_front()
    {
        if (isempty())
        {
            cout << "underflow" << endl;
            return;
        }
        else
        {
            if (front == rear)
            {
                cout << "popped " << arr[front] << " from front of array" << endl;
                front = rear = -1;
            }
            cout << "popped " << arr[front] << " from front of array" << endl;
            front = (front + 1) % size;
            return;
        }
    }
    void pop_back()
    {
        if (isempty())
        {
            cout << "underflow" << endl;
            return;
        }
        else
        {
            if (front == rear)
            {
                cout << "popped " << arr[rear] << " from back of array" << endl;
                front = rear = -1;
                return;
            }
            else
            {
                cout << "popped " << arr[rear] << " from back of array" << endl;
                rear = (rear - 1 + size) % size;
                return;
            }
        }
    }
};
int main()
{
    deque q(4);
    q.push_back(5);
    q.push_back(10);
    q.push_back(15);
    q.push_front(2);
    q.pop_front();
    q.pop_back();
}