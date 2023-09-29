#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    // everthing is same as SET, only difference is, it is NOT sorted
    // Insertion in unordered_set is RANDOM
    // They are implemented as a hash table in memory, the element in the unordered_set acts as both key and value in the hash table.
    // All operations take O(1) time on average and O(N) time in the worst case
    unordered_set<int> a;
    a.insert(2);
    a.emplace(4);
    a.emplace(1);
    a.emplace(3);

    for (auto i : a)
    {
        cout << i << endl;
    }
    //lower_bound() and upper_bound() function doesnot work, rest all the operations are same
}