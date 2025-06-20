#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int main()
{
    stack<int> st;
    queue<int> q;
    q.push(5);
    q.push(10);
    q.push(15);
    q.push(20);
    q.push(25);
    cout << "before reversal: ";

    cout << "before: ";
    while (!q.empty())
    {
        cout << q.front() << endl;
        st.push(q.front());
        q.pop();
    }
    cout << "after: ";
    while (!st.empty())
    {
        q.push(st.top());
        cout << st.top() << endl;
        st.pop();
    }
}