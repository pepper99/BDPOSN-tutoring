
// PROBLEM : Find bitonic peak index in array of integers.
//           Bitonic peak is where value to its left and right are less than itself.
//           If at leftmost index, only need its right value to be less, and vice versa for the rightmost index.
// INPUT : First line is integer N which is the number of element(s) in the array
//         Next N line(s) are elements of said array
// OUTPUT : Index of "any" bitonic peak in the array
//
// Try it out yourself : https://leetcode.com/problems/find-peak-element/

#include <iostream>
#include <climits>
using namespace std;

void solve(int a[], int n, int l, int r) {
    int mid = (l+r)/2;
    int leftmid = mid - 1 < 0 ? INT_MIN : a[mid - 1];
    int rightmid = mid + 1 >= n ? INT_MIN : a[mid + 1];

    if(leftmid < a[mid] && a[mid] > rightmid) {
        cout << mid;
        return;
    }
    else if(leftmid > a[mid]) solve(a, n, l, mid);
    else if(rightmid > a[mid]) solve(a, n, mid + 1, r);
}

main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    int l = 0, r = n;
    solve(a, n, l, r);
}