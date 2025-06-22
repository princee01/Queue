#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> q;
    q.push_back(10);
    q.push_front(30);
    cout << q.front();
    q.pop_front();
    cout << q.front();
}