#include <iostream>
#include <set>
using namespace std;

int main()
{
    // Multiset stores- Only sorted values, NOT unique values
    multiset<int> a = {1, 1, 1, 1, 1, 3};
    a.insert(2);
    a.emplace(4);

    // only a single value erased
    a.erase(a.find(1)); // a.find(<elem>) will find the first occurrence of element out of all the multiple occurrences of same item

    // all the value is erased
    a.erase(1); // it will erase all the occurrences of 1
    auto it = a.begin();

    for (auto i : a)
    {
        cout << i << " ";
    }
}