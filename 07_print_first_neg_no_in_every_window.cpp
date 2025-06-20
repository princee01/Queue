#include <iostream>
#include <queue>
using namespace std;
void displayneg(queue<int> q)
{
    while (!q.empty())
    {
        if (q.front() < 0)
        {
            cout << q.front() << " ";
            break;
        }
        q.pop();
    }
}
int main()
{
    int arr[] = {2, -3, 5, -7, -9, 10};
    queue<int> q;
    int k = 3;

    for (int i = 0; i < k - 1; i++)
    {
        q.push(arr[i]);
    }
    for (int i = k - 1; i < 6; i++)
    {
        q.push(arr[i]);
        displayneg(q);
        q.pop();
    }
    return 0;
}