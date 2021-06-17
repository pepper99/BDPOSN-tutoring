#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

main()
{
    queue<int> q1; // queue constructing
    cout << q1.size() << '\n';

    q1.push(23); // adding element to back of queue
    cout << q1.front() << ' ';
    cout << q1.size() << '\n';

    q1.push(12);
    q1.push(14);
    q1.push(-123);
    q1.push(4);
    q1.push(24);

    cout << q1.front() << ' ';
    cout << q1.size() << '\n';

    q1.pop(); // pop front element out of queue
    cout << q1.front() << ' ';
    cout << q1.size() << '\n';

    while(!q1.empty()) { // loop printing front element and pop out
        cout << q1.front() << ' ';
        q1.pop();
    }
}