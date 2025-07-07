/*

16 12 8 4
12 9 6 3
8 6 4 2
4 3 2 1

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        for (int j = n; j >= 1; j--)
        {
            cout << i * j << " ";
        }
        cout << endl;
    }

    return 0;
}