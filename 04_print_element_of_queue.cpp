#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main()
{
    queue<int> q;
    q.push(2);
    q.push(3);
    q.push(5);
    q.push(7);
    q.push(8);
    q.push(9);

    vector<int> arr;
    int count = 0;
    while (!q.empty())
    {
        cout << q.front() << " ";
        arr.push_back(q.front());
        count++;
        q.pop();
    }
}
