#include <iostream>
#include <queue>
using namespace std;

main()
{
    priority_queue<int> pq; // construcing
    cout << pq.size() << '\n'; // checking size

    pq.push(237); // inserting element
    cout << pq.top() << '\n'; // retrieve top element (which is the most value)

    pq.push(23);
    pq.push(-7);
    pq.push(0);
    pq.push(37);
    pq.push(12237);
    cout << pq.top() << '\n'; // print 12237
    
    pq.pop();
    cout << pq.top() << '\n'; // print 237
    
    // loop printing top element and pop out
    // this should print out value from most to least
    while(!pq.empty()) {
        cout << pq.top() << ' ';
        pq.pop();
    }
    cout << '\n';

    // constructing priority_queue in order from least value to most
    priority_queue<int, vector<int>, greater<int>> pq2;

    pq2.push(237);
    pq2.push(23);
    pq2.push(-7);
    pq2.push(0);
    pq2.push(37);
    pq2.push(12237);
    
    // this should print out value from least to most
    while(!pq2.empty()) {
        cout << pq2.top() << ' ';
        pq2.pop();
    }
}