#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

main()
{
    // constructing
    vector<int> v1; // create default vector (0 slot)
    vector<int> v1(5); // create 5 slots vector with default value
    vector<int> v1(5, INT_MAX); // create 5 slots vector with INT_MAX value
    vector<int> v3 = {1, -4, 5, 76, -2, 134}; // create vector from pre defined array

    // for loop
    cout << v1.size() << '\n';
    for(int i = 0; i < v1.size(); i++) cout << v1[i] << ' ';

    // copy constructing 
    vector<int> v2(v1); // v2 copy from v1
    cout << '\n';
    for(int i = 0; i < v2.size(); i++) cout << v2[i] << ' ';

    v2.clear(); // delete all elements in v2
    cout << '\n';
    for(int i = 0; i < v2.size(); i++) cout << v2[i] << ' ';
    cout << v2.size();

    cout << '\n';
    v1.insert(v1.begin(), 2); // insert 2 at the beginning of v1 (slow!!!)
    for(int i = 0; i < v1.size(); i++) cout << v1[i] << ' ';

    for(int i = 0; i < v3.size(); i++) cout << v3[i] << ' ';

    // algorithm library    
    sort(v3.begin(), v3.end()); // sort function
    cout << '\n';
    for(int i = 0; i < v3.size(); i++) cout << v3[i] << ' ';

    // finding max element in vector (slow)
    cout << '\n' << *max_element(v3.begin(), v3.end()) << '\n'; 
    
    // finding lower bound element in vector (fast)
    // lower bound element is the element that is equal or more than search value
    // return iterator pointing to result element

    lower_bound(v3.begin(), v3.end(), 74); // this will find value with 74 or higher
    if(*lower_bound(v3.begin(), v3.end(), 74) == 74) { 
        cout << "found!\n";
    }
    else {
        cout << "bruh!\n";
    }

    // finding upper bound element in vector (fast)
    // upper bound element is the element that is more than search value
    // this will find value more than 76
    // return iterator pointing to result element
    cout << '\n' << *upper_bound(v3.begin(), v3.end(), 76);

    // find specified element (slow)
    // return iterator pointing to result element
    cout << '\n' << *find(v3.begin(), v3.end(), 5);
}