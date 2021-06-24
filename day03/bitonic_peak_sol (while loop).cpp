
// PROBLEM : Find bitonic peak index in array of integers.
//           Bitonic peak is where value to its left and right are less than itself.
//           If at leftmost index, only need its right value to be less, and vice versa for the rightmost index.
//           Assume that all input array always has at least on bitonic peak.
// INPUT : First line is integer N which is the number of element(s) in the array
//         Next N line(s) are element(s) of said array
// OUTPUT : Index of the bitonic peak in the array
//
// Try it out yourself : https://leetcode.com/problems/find-peak-element/

#include <iostream>
#include <climits>
using namespace std;

main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    int l = 0, r = n;
    while(l < r) {
        int mid = (l+r)/2;
        int leftmid = mid - 1 < 0 ? INT_MIN : a[mid - 1];
        int rightmid = mid + 1 >= n ? INT_MIN : a[mid + 1];

        if(leftmid < a[mid] && a[mid] > rightmid) {
            cout << mid;
            break;
        }
        else if(leftmid > a[mid]) r = mid;
        else if(rightmid > a[mid]) l = mid + 1;
    }
}