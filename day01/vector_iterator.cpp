#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

main()
{
    vector<int> v1 = {0, 10, 20, 30, 40, 50, 60, 70, 80};
    vector<float> v2 = {124352, 0.2, -4, 0.13, 3.14, 2.73};

    // iterator
    vector<int>::iterator it0 = v1.begin(); // pointing to first element
    vector<int>::iterator it1 = v1.begin() + 3; // pointing to 1st + 3 = 4th element
    vector<float>::iterator it2 = v2.end() - 1; // pointing to last element

    // pointing to last slot memory which are unallocated (not ours)
    // DO NOT DIRECTLY USE!!
    vector<float>::iterator it3 = v2.end(); 

    cout << *it0 << '\n'; // print out 0
    cout << *it1 << '\n'; // print out 30
    cout << *it2 << '\n'; // print out 2.73
    // cout << *it3 << '\n'; // print out random value (UNALLOCATED)

    it0++; // move pointing to the right by 1 
    cout << *it0 << '\n'; // print out 10
    it3--; // move pointing to the left by 1 
    cout << *it3 << '\n'; // print out 2.73

    sort(v2.begin() + 1, v2.end()); // sort v2 from 2nd to last (1st element not sorted)
    for(int i = 0; i < v2.size(); i++) cout << v2[i] << ' ';
    cout << '\n';

    // range based loop (c++ takes advantage of iterator)
    for(int x : v1) cout << x << ' ';
}