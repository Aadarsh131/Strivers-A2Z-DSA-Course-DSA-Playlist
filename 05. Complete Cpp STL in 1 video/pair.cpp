#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int> a = {1, 3};
    cout << a.first << a.second << endl;

    pair<int, pair<int, int>> b[] = {{1, {2, 3}},
                                     {4, {5, 6}}}; // b[] is of type pair<int,pair<int,int>>
    cout << b[1].second.first << endl;
    ;

    // same using vector
    vector<pair<int, pair<int, int>>> v = {{6, {7, 8}},
                                           {3, {1, 9}}};
    // Display
    for (auto i : v)
    {
        cout << "{" << i.first << ","
             << "{" << i.second.first << "," << i.second.second << "}}  ";
    }
    cout << endl;
    // OR
    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << "{" << i->first << ","
             << "{" << i->second.first << "," << i->second.second << "}}  "; // NOTICE: how -> is required insted of . operator
    }
    cout << endl;
};