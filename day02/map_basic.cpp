#include <iostream>
#include <map>
using namespace std;

main()
{
    map<string, int> m1; // constructing
    cout << m1.size() << '\n'; // checking size

    m1.insert({"myAttackPoint", 50}); // insert using pair data structure
    cout << m1["myAttackPoint"] << '\n'; // retrieve value using key by [] method

    // retrieve value using key by find() method (return iterator pointing to pair)
    cout << m1.find("myAttackPoint")->first << ' ' << m1.find("myAttackPoint")->second << '\n';

    // how to find element by if/else
    if(m1.find("myDefensePoint") != m1.end()) {
        cout << m1.find("myDefensePoint")->first << ' ' << m1.find("myDefensePoint")->second << '\n';
    }
    else cout << "NOO!!\n";

    // if using [] and the key does not exist, it put the key in with default value (zero)
    cout << m1["myDefensePoint"] << '\n';

    // this is equal to m1["myDefensePoint"] when there's no "myDefensePoint" key in m1
    m1.insert({"myDefensePoint", 0});

    map<int, int> m2;
    m2.insert({2, 3});
    m2.insert({-25, 3});
    m2.insert({3214, 3});
    m2.insert({0, 3});

    // using built-in function (lower_bound, upper_bound)
    cout << m2.lower_bound(2)->first << ' ' << m2.lower_bound(2)->second << '\n';

    // looping through map
    for(auto it = m2.begin(); it != m2.end(); it++) cout << it->first << ' ' << it->second << '\n';
}