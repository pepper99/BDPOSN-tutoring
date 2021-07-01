/**
*   Comparison between std::set and std::unordered_set
*   @author Poptum Charoennaew <poptum.c@gmail.com>
*/

#include <iostream>
#include <chrono>
#include <set>
#include <unordered_set>
using namespace std;

main()
{
    ios_base::sync_with_stdio(false);

    set<int> s;
    unordered_set<int> us;

    // insert
    cout << "\n## insertion ##\n";
    auto s1 = chrono::high_resolution_clock::now();

    for(int i = 0; i < 1000000; i++) s.insert(rand() % 1000000);

    auto e1 = chrono::high_resolution_clock::now();
    auto d1 = chrono::duration_cast<chrono::nanoseconds>(e1 - s1);
    cout << "set[] = " << d1.count() << " ns\n";

    auto s2 = chrono::high_resolution_clock::now();

    for(int i = 0; i < 1000000; i++) us.insert(rand() % 1000000);
    
    auto e2 = chrono::high_resolution_clock::now();
    auto d2 = chrono::duration_cast<chrono::nanoseconds>(e2 - s2);
    cout << "unordered[] = " << d2.count() << " ns\n";

    cout << "diff = " << (float) d1.count()/d2.count();

    cout << "\n\n------------------------------------------------------------\n\n";

    // find
    cout << "## find ##\n";
    s1 = chrono::high_resolution_clock::now();

    for(int i = 0; i < 1000000; i++) s.find(rand() % 1000000);

    e1 = chrono::high_resolution_clock::now();
    d1 = chrono::duration_cast<chrono::nanoseconds>(e1 - s1);
    cout << "set.find = " << d1.count() << " ns\n";

    s2 = chrono::high_resolution_clock::now();

    for(int i = 0; i < 1000000; i++) us.find(rand() % 1000000);

    e2 = chrono::high_resolution_clock::now();
    d2 = chrono::duration_cast<chrono::nanoseconds>(e2 - s2);
    cout << "unordered_set.find = " << d2.count() << " ns\n";

    cout << "diff = " << (float) d1.count()/d2.count();

    cout << "\n\n------------------------------------------------------------\n\n";

    // remove
    cout << "## remove ##\n";
    s1 = chrono::high_resolution_clock::now();

    for(int i = 0; i < 1000000; i++) s.erase(rand() % 1000000);

    e1 = chrono::high_resolution_clock::now();
    d1 = chrono::duration_cast<chrono::nanoseconds>(e1 - s1);
    cout << "set.find = " << d1.count() << " ns\n";

    s2 = chrono::high_resolution_clock::now();

    for(int i = 0; i < 1000000; i++) us.erase(rand() % 1000000);

    e2 = chrono::high_resolution_clock::now();
    d2 = chrono::duration_cast<chrono::nanoseconds>(e2 - s2);
    cout << "unordered_set.find = " << d2.count() << " ns\n"; 

    cout << "diff = " << (float) d1.count()/d2.count();

    for(auto it = s.begin(); it != s.end(); it++);
    for(auto it = us.begin(); it != us.end(); it++);
}