#include <iostream>
#include <stack>
using namespace std;

void loopOver(stack<int> a)
{
    if (a.empty())
        return;

    cout << a.top() << " ";
    a.pop();
    loopOver(a);
    a.push(a.top());
}

int main()
{
    stack<int> a;
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.emplace(5); // similar to push
    a.push(6);
    a.pop(); // pops the last pushed item

    cout << a.top() << endl; // last pushed item (LIFO- the last guy will be out first)
    cout << a.empty() << endl;
    cout << a.size() << endl;

    stack<int> s1, s2;
    s1.swap(s2);

    // NOTE: every operations above, has 0(1) (i.e, constant time complexity)

    // Traverse
    // no iterators for stack (hence,no begin() and end() functions)
    // there are 3 ways we can traverse

    // #1 way-
    stack<int> b(a);
    // for (int i = 1; i < a.size(); i++)
    // {
    //     cout << b.top() << endl;
    //     b.pop();
    // }
    // OR
    while (!b.empty())
    {
        cout << b.top() << " ";
        b.pop();
    }

    // #2 way(using recursion, heap mem is used)-
    loopOver(a);
    cout << endl;
    
}