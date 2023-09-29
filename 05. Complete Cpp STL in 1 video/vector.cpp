#include <iostream>
#include <utility>
#include <vector>
using namespace std;

// void display(vector<int> v){
//     for(int i=v.begin();i<v.end();i++){
//         cout << v[i] "\t";
//     }
// }

int main()
{
    vector<pair<int, int>> a;
    a.push_back({1, 2});
    a.emplace_back(3, 4); // emplace_back knows that the passed argument is <pair> type, hence, no need of passing {} unlike push_back

    vector<int> b(5, 100); // b(<size>,<valuesInIt>)
    vector<int> c(6);      // 6 garbage value OR 0 is stored, based on the compiler
    vector<int> d(c);      // vector c will be copied to new vector d
    // cout << c[9] << c.at(3) << endl; //at() checks for range outbounds, while [] doesnot

    // Iterator
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<int>::iterator it = v.begin();
    it++;
    cout << *it << endl;
    vector<int>::iterator it1 = v.end();            // end() points to the location after the last element
    vector<int>::reverse_iterator it2 = v.rbegin(); // first reverses it then iterate
    vector<int>::reverse_iterator it3 = v.rend();   // first reverses it then iterate

    cout << v.back() << endl; // shows the last element

    ////////////Display
    for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
    // OR
    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
    // OR
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    //////////////DELETE
    v.erase(v.begin() + 1);                // delete 1 item
    v.erase(v.begin() + 2, v.begin() + 4); // delete from index [2,4) i.e, including the first term, but excluding the last term
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    ////////////INSERT
    v.insert(v.begin() + 1, 94);             // insert(<pos>,<1value>)
    v.insert(v.begin() + 2, 2, 64);          // insert(<pos>,<no. of items>,<values>)
    v.insert(v.begin(), c.begin(), c.end()); // copying whole array and inserting to desired position
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << v.size() << endl; // vector size
    v.pop_back();             // delete the last element
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2 = {4, 5, 7, 0, 9};
    v1.swap(v2);        // swaps
    v1.clear();         // deletes all the items inside the vector
    cout << v2.empty(); // true OR false
}