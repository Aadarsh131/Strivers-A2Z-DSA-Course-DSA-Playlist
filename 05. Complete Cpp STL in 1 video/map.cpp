#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, int> m1;
    map<int, pair<int, int>> m2;
    map<pair<int, int>, int> m3;

    m1[1] = 2;
    m2[1] = {1, 2};
    m3[{1, 2}] = 1;
    m3[{2, 0}] = 0;
    m3[{0, 1}] = 5;

    m1.emplace(2, 1);
    m1.insert({4, 0});

    cout << m1[1] << m1[2] << m1[4] << endl;
    cout << m2[1].first << endl;
    cout << m3[{1, 2}] << endl;

    cout << "for m1-" << endl;
    for (auto i : m1)
    {
        cout << i.first << " : " << i.second << endl; // NOTICE: first() and second() method are the iterator's method
    }
    cout << "for m3-" << endl;
    for (auto i : m3)
    {
        cout << "(" << i.first.first << "," << i.first.second << ")"
             << " : " << i.second << endl;
        // NOTICE: the sorting is done using the 'i.first.first', i.e, the very first element of the pair(key)
    }

    auto it1 = m1.find(1);
    auto it2 = m1.find(9); // if not found, it would point to m1.end(), 1 index after the last item

    cout << it1->first << it2->second << endl; // NOTE: *it.first(), the . operation will not work here, but it would work in for(auto i: m) loop, check and understand why

    auto it3 = m3.find({1, 2});
    cout << it3->first.first << it3->first.second << it3->second << endl; // NOTICE: the order of -> and . operator in here, it is important to keep it that way, check and understand why(it maybe because of the same reason as above)

    // auto it = m1.lower_bound(2);
    // auto it = m2.upper_bound(4);

    // all other functions are same
}
