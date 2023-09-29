#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // queue- FIFO(first in first out)
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(3);

    q.pop(); // pops the first pushed item

    // all other methods are similar to stack

    // NOTE: again all the operation are happening in O(1) time complexity(as in stack)
}
