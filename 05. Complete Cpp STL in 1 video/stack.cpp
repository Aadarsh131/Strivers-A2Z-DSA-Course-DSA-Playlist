#include <iostream>
#include <stack>
using namespace std;

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
}