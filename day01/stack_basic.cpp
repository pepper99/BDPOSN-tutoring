#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

main()
{
    stack<int> s1; // stack constructing
    cout << s1.size() << '\n';

    s1.push(124); // adding element to top of stack
    cout << s1.size() << '\n';
    cout << s1.top() << '\n'; // getting element from top of stack

    s1.push(12);
    s1.push(14);
    s1.push(-123);
    s1.push(4);
    s1.push(24);

    cout << s1.size() << '\n';
    cout << s1.top() << '\n';
    
    s1.pop(); // pop element on top of stack
    cout << s1.size() << '\n';
    cout << s1.top() << '\n';

    if(s1.empty()) cout << "awww";
    else cout << "yeah!!";

    while(!s1.empty()) { // loop printing top element and pop out
        cout << s1.top() << ' ';
        s1.pop();
    }
    cout << '\n' << s1.size();
}