/**
*   PROBLEM : Let a barcode of black and white can be represent with bit strings of one and zero
              Let 0 represents a black bar and 1 represents a white bar
              i.e. 010011 is a barcode with colors from left to right are black, white, black, black, white, white
              Print out all possible barcodes where the barcodes have B bars with exactly A white bars
              i.e if A = 2, B = 2, then 00101, 00011, and 01001 are among the possible barcodes
*   INPUT : Integer A and B
*   OUTPUT : Bit strings represent the possible barcodes in each line, in any order
*
*   Solution by Poptum Charoennaew <poptum.c@gmail.com>
*/

#include <iostream>
#include <vector>
using namespace std;

void rec(vector<int> &v, int b, int a, int i) {
    if(i == b) {
        if(a == 0) {
            for(int j = 0; j < v.size(); j++) cout << v[j];
            cout << '\n';
        }
        return;
    }

    if(b >= i + a) {
        v[i] = 0;
        rec(v, b, a, i + 1);
        if(a > 0) {
            v[i] = 1;
            rec(v, b, a - 1, i + 1);
        }
    }
}


main()
{
    int a, b;
    cin >> a >> b;

    vector<int> v(b, 0);
    rec(v, b, a, 0);
}