/**
*   PROBLEM : Find number of all possible bit strings that no zero are close to each other
*   INPUT : Integer n
*   OUTPUT : Integer indicating sum of all possible bit strings
*
*   Solution by Poptum Charoennaew <poptum.c@gmail.com>
*/

#include <iostream>
using namespace std;

// D&C (Mediocre performance)

#define ll long long

ll solve(ll n, ll x, ll level) {
    if(level == n) return 1;
    if(x == 0) return solve(n, 1, level + 1);
    else return solve(n, 0, level + 1) + solve(n, 1, level + 1);
}

main()
{
    ll n;
    cin >> n;
    cout << solve(n, 0, 1) + solve(n, 1, 1);
}