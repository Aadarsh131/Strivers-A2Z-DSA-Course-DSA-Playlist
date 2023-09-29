#include <iostream>
// #include<utility>
#include <bits/stdc++.h>

using namespace std;

template <class T>
class Comparator
{ // we pass an object of this class as
  // third arg to sort function...
public:
    bool operator()(T x1, T x2)
    {
        return x1 > x2;
    }
};

template <class T>
bool funComparator(T x1, T x2)
{
    return x1 > x2;
}

bool custom_pair_comparator(pair<int, int> p1, pair<int, int> p2)
{
    // logic-
    // sort by the second item of the pair(ascending),
    // but if they are same, then, sort is by first item of the pair but in (descending) order

    // increasing order(ascending)
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;

    // if they are same, thats the only condition left
    // decreasing order(descending)
    if (p1.second < p2.second)
        return false;
    if (p1.second > p1.second)
        return true;
}
int main()
{
    int a[] = {4, 3, 5, 7, 2, 1};
    vector<int> v = {2, 5, 3, 6, 7, 3, 1, 0};

    int n = sizeof(a) / sizeof(a[0]); // to find the size of array

    // The time complexity of std::sort() is:
    // Best Case – O(N log N)
    // Average Case – O(N log N)
    // Worst-Case – O(N log N)
    sort(a, a + n);           // sorting array
    sort(v.begin(), v.end()); // sorting vector

    sort(a + 2, a + 5);             // sort from index 2 to 4 i.e, [0,5)
    sort(a, a + n, greater<int>()); // greater() is a comparator, it will sort in descending order

    pair<int, int> p[] = {{2, 1}, {4, 1}, {0, 2}};
    int m = sizeof(p) / sizeof(p[0]);
    sort(p, p + m, custom_pair_comparator);

    // sort(v.begin(), v.end(), Comparator<int>()); //using class
    sort(v.begin(), v.end(), funComparator<int>); // using function

    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << endl;
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    for (auto i : p)
    {
        cout << "(" << i.first << "," << i.second << ")"
             << " ";
    }
    cout << endl;

    //////////////// EXTRA but important
    // binary one's count
    int num = 7;
    int binary_ones_count7 = __builtin_popcount(num); // 7 in binary is represented as [000....111], the count of 1's will be stored
    cout << binary_ones_count7 << endl;

    num = 6; //[000...110]
    int binary_ones_count6 = __builtin_popcount(num);
    cout << binary_ones_count6 << endl;

    // permutations
    string s = "231";
    // its very important to sort the string first to find all the permutations, because  the permutation inside the next_permutation internally is done in sorted manner, hence, without the sorted string all the permutations cannot be obtained
    sort(s.begin(), s.end()); // 123
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end())); // it will only find 1 permutation at a time

    // min and max element
    cout << "Min: " << *min_element(a, a + n) << endl;
    cout << "Max: " << *max_element(a, a + n) << endl;
}