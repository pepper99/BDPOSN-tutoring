/**
*   PROBLEM : Given an array of integers A = a1, a2, a3, ..., an
*             Find the maximum sum of non-empty subarray of A
*             Subarray of A is an array with ap, ap+1, ap+2, ..., aq where 1 <= p <= q <= n
*   INPUT : Array of integers A = a1, a2, a3, ..., an
*   OUTPUT : Max summation of subarray of A
*/

// maximum sum of subarray (Divide and conquer version)
#include <iostream>
#include <vector>
using namespace std;

int solve(vector<int> &a, vector<int> &s, int start, int end) {
    if(end - start == 1) return a[start];
    int mid = (start + end)/2;

    int r = max(solve(a, s, start, mid), solve(a, s, mid, end));

    int maxLeft = s[mid] - s[mid - 1];
    int maxRight = s[mid + 1] - s[mid];

    // find max sum on left side, end at mid
    for(int i = start; i < mid - 1; i++) maxLeft = max(maxLeft, s[mid] - s[i]);

    // find max sum on right side, start from mid + 1
    for(int i = mid; i < end; i++) maxRight = max(maxRight, s[i + 1] - s[mid]);
    return max(r, maxLeft + maxRight);
}

int solve(vector<int> &a) {
    vector<int> s(a.size() + 1, 0);
    for(int i = 0; i < a.size(); i++) {
        s[i + 1] = a[i] + s[i];
    }
    return solve(a, s, 0, a.size());
}

main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    cout << solve(a);
}