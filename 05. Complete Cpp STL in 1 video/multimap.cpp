#include <iostream>
#include <map>
using namespace std;

int main()
{
    // It can store duplicate keys, else everything is same(it is sorted)
    multimap<int, int> m;
    m.insert({1, 2});
    m.emplace(1, 3);

    for (auto i : m)
    {
        cout << i.first << ":" << i.second << endl;
    }
}