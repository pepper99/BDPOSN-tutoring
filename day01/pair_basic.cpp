#include <iostream>
#include <algorithm>
using namespace std;

main()
{
    pair<int, float> p1; // constructing

    p1.first = 0; // assign value to each in pair
    p1.second = 0.235;
    cout << p1.first << ' ' << p1.second << '\n';

    pair<int, string> p2 = {253, "hey"}; // assign value using bracket
    cout << p2.second << ' ' << p2.first;

    cout << '\n';
    pair<int, string> p3 = make_pair(-124, "hey"); // assign value using make_pair()
    cout << p3.second << ' ' << p3.first;

    p3 = p2; // using equal to copy pair
    cout << '\n';
    cout << p3.second << ' ' << p3.first;

    pair<int, float> p4(p1); // copy constructing
    cout << '\n';
    cout << p4.first << ' ' << p4.second;

    pair<pair<int, int>, int> p5 = {{0, 1}, 2}; // pair in pair
    cout << '\n';
    cout << p5.first.first << ' ' << p5.first.second << ' ' << p5.second;
}