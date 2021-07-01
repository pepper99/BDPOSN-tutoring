/**
*   PROBLEM : Calculate a^n mod k
*   INPUT : Integers a, n, and k
*   OUTPUT : Result of a^n mod k
*/

#include <iostream>
using namespace std;

#define ll long long

ll solve(ll a, ll n, ll k) {
    if(n == 1) return a % k;
    ll s = solve(a, n/2, k);
    s = (s *   s) % k;
    return n % 2 == 0 ? s : (s *   (a % k)) % k;
}

main()
{
    ll a, n, k;
    cin >> a >> n >> k;
    cout << solve(a, n, k);
}