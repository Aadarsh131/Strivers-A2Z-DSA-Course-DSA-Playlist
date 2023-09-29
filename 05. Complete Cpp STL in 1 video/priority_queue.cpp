#include <iostream>
#include <queue>
using namespace std;

// Priority_queue is also called as HEAP
int main()
{
    // the item with the hightest value(for strings, its the hightest lexicographical value) that remains on top
    // NOTE: internally priority_queue is not a linear DS, there's a Tree DS implemented behind the scenes

    // MAX HEAP (max value will be at the top)
    priority_queue<int> max_heap;
    max_heap.push(5);
    max_heap.emplace(1);
    max_heap.emplace(6);
    max_heap.emplace(2);

    cout << "Max Heap: " << max_heap.top() << endl;
    max_heap.pop(); // pops the item from the top //NOTE: push and pop will not happen in FIFO as in queue, so pop will be always from top, and NOT the first pushed item

    // MIN HEAP (min value will be at the top)
    priority_queue<int, vector<int>, greater<int>> min_heap;
    min_heap.emplace(4);
    min_heap.emplace(1);
    min_heap.emplace(3);

    cout << "Min heap: " << min_heap.top() << endl;

    //NOTE: in STL priority_queue- 
    // push - O(log n)
    // pop  - O(log n)
    // top  - O(1)

}