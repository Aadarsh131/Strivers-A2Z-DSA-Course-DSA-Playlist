#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> a = {1, 2, 3, 4};

    a.push_back(8);
    a.emplace_back(9);
    a.push_front(0); // NOTE: vector doenst have 'push_front()'and push_back() method, we use 'insert()' method there
    //'insert()' method is very costly interms of time complexity, as it uses singly linked list int its implementation internally
    // on the other hand, 'push_front()/push_back()' and 'emplace_front()/emplace_back()' method is effective and very fast, as it uses doubly linked list in its implementation internally
    a.emplace_front(4);
    a.pop_back();
    a.pop_front();
    cout << a.back() << endl;
    cout << a.front() << endl;
    cout << a.empty() << endl;

    for (auto i : a)
    {
        cout << i << " ";
    }

    // rest of the methods are same as vector's
    // begin, end, rbegin, rend, insert, erase, size, swap, clear, empty etc
}