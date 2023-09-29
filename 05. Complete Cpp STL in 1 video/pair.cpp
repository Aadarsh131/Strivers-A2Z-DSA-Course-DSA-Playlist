#include <iostream>
// #include <bits/stdc++.h>
#include <utility>
using namespace std;

int main()
{
    pair<int, int> a = {1, 3};
    cout << a.first << a.second << endl;

    pair<int, pair<int, int>> b[] = {{1, {2, 3}},
                                     {4, {5, 6}}}; //b[] is of type pair<int,pair<int,int>>

    cout << b[1].second.first;
};