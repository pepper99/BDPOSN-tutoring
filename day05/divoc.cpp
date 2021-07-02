/**
*   Solution by Poptum Charoennaew <poptum.c@gmail.com>
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// using master method 
// T(n) = 3T(n/2) + O(n)
//      = O(n^log_3(2)) ≈ O(n^1.585)

bool check(vector<int> &v, int r, int start, int end) {
    if(r == 2) return v[start] == 0 && v[start + 1] == 1;

    int mid = (start + end) >> 1;

    bool leftCheck = check(v, r >> 1, start, mid);
    bool rightCheck = check(v, r >> 1, mid, end);

    reverse(v.begin() + start, v.begin() + mid);
    bool reverseCheck = check(v, r >> 1, start, mid);
    reverse(v.begin() + start, v.begin() + mid);

    return (leftCheck || reverseCheck) && rightCheck;
}

main()
{
    int n, k;
    cin >> n >> k;
    int N = 1 << k;
    
    vector<int> v(N);
    while(n--) {
        for(int i = 0; i < N; i++) cin >> v[i];
        cout << (check(v, N, 0, N) ? "yes" : "no") << '\n';
    }
}