#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    // same difference as between set and unordered_set(items are unordered but doesn't have duplicate keys )
    unordered_map<int, int> m;

    // Time complexity:
    // map- almost all has log(N)
    // unordered_map- almost all has O(1), in worst case it goes to O(N)
}