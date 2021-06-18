#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

main()
{
    set<int> s1; // constructing
    cout << s1.size() << '\n'; // checking size

    s1.insert(325); // inserting element
    s1.insert(-2);
    s1.insert(35);
    s1.insert(5);

    // how to find element by if/else
    if(s1.find(20) != s1.end()) {
        cout << *s1.find(20) << '\n';
    }
    else cout << "awww\n";

    // looping through set
    for(auto it = s1.begin(); it != s1.end(); it++) cout << *it << '\n';
    
    // using built-in function (lower_bound, upper_bound)
    cout << *s1.upper_bound(5) << '\n';
}