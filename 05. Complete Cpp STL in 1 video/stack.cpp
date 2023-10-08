#include <iostream>
#include <stack>
using namespace std;

void loopOver(stack<int> &a)
{
    if (a.empty())
        return;
    int x = a.top();
    cout << x << " ";
    a.pop();
    loopOver(a);
    a.push(x);
    // a.push(x.top())//this would give the segmentation fault execption, hence we are storing the value in x
}

// template <typename T>
// void traverseStack(std::stack<T> &stk) {
//     if (stk.empty()) {
//         return;
//     }
//     T x = stk.top();
//     std::cout << x << " ";
//     stk.pop();
//     traverseStack(stk);
//     stk.push(x);
// }
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
    // traverseStack(a);
    cout << endl;

    // Both of the above way are ineffective, instead use deque
    // #3 way(deque- it can be iterated over range-based for-loops)-
    deque<int> d;
    d.push_front(1); // use push_front() and pop_front() only to simulate the stack
    d.push_front(2);
    d.push_front(3);
    d.push_front(4);

    d.pop_front(); // will pop out the last inserted push_front() element

    // d.push_back(0); // this operation doesn't replicated the stack way, infact it breaks the rule of LIFO, hence, dont use it, while using deque as stack, push_front() and pop_front() follows the LIFO exactly
    for (auto i : d)
    {
        cout << i << " ";
    }
    cout << endl;
}