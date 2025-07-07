/*
------------
n = 3
pattern

12 15 18
6  9
3
------------
n = 4
pattern

28 32 36 40
16 20 24
8 12
4

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ap = n * (n + 1) / 2;
    for (int i = n; i >= 1; i--)
    {
        int mul = ap - i + 1;
        for (int j = 1; j <= i; j++)
        {

            cout << n * mul << " ";
            mul++;
        }
        ap = ap - i;
        cout << endl;
    }

    return 0;
}