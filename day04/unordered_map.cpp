/**
*   Comparison between std::map and std::unordered_map
*   @author Poptum Charoennaew <poptum.c@gmail.com>
*/

#include <iostream>
#include <chrono>
#include <map>
#include <unordered_map>
using namespace std;

main()
{
    ios_base::sync_with_stdio(false);

    map<int, int> m;
    unordered_map<int, int> um;

    // insert
    cout << "\n## insertion ##\n";
    auto s1 = chrono::high_resolution_clock::now();

    for(int i = 0; i < 1000000; i++) m[rand() % 1000000] = 1;

    auto e1 = chrono::high_resolution_clock::now();
    auto d1 = chrono::duration_cast<chrono::nanoseconds>(e1 - s1);
    cout << "map[] = " << d1.count() << " ns\n";

    auto s2 = chrono::high_resolution_clock::now();

    for(int i = 0; i < 1000000; i++) um[rand() % 1000000] = 1;
    
    auto e2 = chrono::high_resolution_clock::now();
    auto d2 = chrono::duration_cast<chrono::nanoseconds>(e2 - s2);
    cout << "unordered[] = " << d2.count() << " ns\n";

    cout << "diff = " << (float) d1.count()/d2.count();

    cout << "\n\n------------------------------------------------------------\n\n";

    // find
    cout << "## find ##\n";
    s1 = chrono::high_resolution_clock::now();

    for(int i = 0; i < 1000000; i++) m.find(rand() % 1000000);

    e1 = chrono::high_resolution_clock::now();
    d1 = chrono::duration_cast<chrono::nanoseconds>(e1 - s1);
    cout << "map.find = " << d1.count() << " ns\n";

    s2 = chrono::high_resolution_clock::now();

    for(int i = 0; i < 1000000; i++) um.find(rand() % 1000000);

    e2 = chrono::high_resolution_clock::now();
    d2 = chrono::duration_cast<chrono::nanoseconds>(e2 - s2);
    cout << "unordered_map.find = " << d2.count() << " ns\n";

    cout << "diff = " << (float) d1.count()/d2.count();

    cout << "\n\n------------------------------------------------------------\n\n";

    // remove
    cout << "## remove ##\n";
    s1 = chrono::high_resolution_clock::now();

    for(int i = 0; i < 1000000; i++) m.erase(rand() % 1000000);

    e1 = chrono::high_resolution_clock::now();
    d1 = chrono::duration_cast<chrono::nanoseconds>(e1 - s1);
    cout << "map.find = " << d1.count() << " ns\n";

    s2 = chrono::high_resolution_clock::now();

    for(int i = 0; i < 1000000; i++) um.erase(rand() % 1000000);

    e2 = chrono::high_resolution_clock::now();
    d2 = chrono::duration_cast<chrono::nanoseconds>(e2 - s2);
    cout << "unordered_map.find = " << d2.count() << " ns\n";

    cout << "diff = " << (float) d1.count()/d2.count();
}