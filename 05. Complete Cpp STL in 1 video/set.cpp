#include <iostream>
#include <set>
using namespace std;

int main()
{
    // SET stores- unique and sorted values
    set<int> a = {-1, 0, 1, 2, 3, 5, 2, 1}; // Tree DS is implemented internally
    a.insert(1);
    a.emplace(4);

    auto it = a.find(4);    // find() returns an iterator
    auto it1 = a.find(999); // if find() couldn't find the value, then it would simply point to a.end(), i.e, 1 value after the last item in the set

    a.erase(3); // erase using the value (unlike the vector)
    a.erase(it);
    set<int> b = {1, 2, 3, 4, 5, 6, 7, 8};
    b.erase(b.find(2), b.find(5));
    for (auto i : b)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << a.count(3) << endl; // return the existence(in true OR False)

    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    // TO LEARN LATER: upper_bound() and lower_bound()

    // NOTE: every operation in SET happends in- O(log N)
}
