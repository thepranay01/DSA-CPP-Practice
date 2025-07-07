#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 8;
    int b = 7;

    cout << "a & b : " << (a & b) << endl;
    cout << "a | b : " << (a | b) << endl;
    cout << "a ^ b : " << (a ^ b) << endl;
    cout << "~a : " << ~a << endl;

    cout << "17 rightshift 1 is :" << (17 >> 1) << endl;
    cout << "17 rightshift 2 is :" << (17 >> 2) << endl;
    cout << "19 leftshift 1 is :" << (19 << 1) << endl;
    cout << "-5 rightshift 2  :" << (-5 >> 2);

    /*
    in rightshift, 17>> 1 = 17 /2 =8
    in leftshift, 17<<1 = 17*2 = 34
    */

    // +ve shift alwa have a padding with 0
    // -ve number shift have dependency over compiler

    return 0;
}